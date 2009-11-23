#include <iostream>

#include <Windows.h>
#include "APIHook.h"

#include "ThinkVPNCommonLib.h"

using namespace std;

void test()
{
    cout << "test dll!!!" << endl;
};

//WINUSERAPI
//DECLEAR_EX
BOOL
WINAPI
TestPostMessageA(
			 __in_opt HWND hWnd,
			 __in UINT Msg,
			 __in WPARAM wParam,
			 __in LPARAM lParam)
{
	vpn::log << _T( "PostMessageA call ! msg: " ) << Msg << endl;
	return PostMessageA( hWnd, Msg, wParam, lParam );
}

BOOL WINAPI DllMain(HINSTANCE hinstDll, DWORD fdwReason, PVOID fImpLoad)
{
    

    // ��ȡ������·����
    tstring strDllPath = GetModulePath( GetModuleHandle( _T( "ThinkVPNSpyDll.dll" ) ) );

    tstring strLogDir = ParsePath( strDllPath.c_str() ).m_strDirectory;
    vpn::log.SetLogFileDir( strLogDir.c_str(), _T( "ThinkVPNSpyDll" )  );

    tofstream tmp;
    tmp.open( _T( "d:\\vpnspydllkkkkkaaaa" ) );
    tmp << "vpn log" << endl;
    tmp << _T( "vpn log" ) << endl;
    tmp << "log dir: " << strLogDir << endl;

    switch(fdwReason) 
    {
    case DLL_PROCESS_ATTACH:
        //The DLL is being mapped into the process's address space.
        vpn::log << _T( "VPN Spy DLL! The DLL is being mapped into the process's address space." ) << endl;
        break;

    case DLL_THREAD_ATTACH:
        //A thread is being created.
        vpn::log << _T( "VPN Spy DLL! A thread is being created. " ) << endl;
        break;

    case DLL_THREAD_DETACH:
        //A thread is exiting cleanly.
        vpn::log << _T( "VPN Spy DLL! A thread is exiting cleanly." ) << endl;
        break;

    case DLL_PROCESS_DETACH:
        //The DLL is being unmapped from the process's address space.
        vpn::log << _T( "VPN Spy DLL! The DLL is being unmapped from the process's address space. " ) << endl;
        break;
    }

    

    return(TRUE);  // Used only for DLL_PROCESS_ATTACH
}