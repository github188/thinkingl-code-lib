
#pragma once

#ifdef _WIN32

#ifndef WINVER
#define WINVER 0x0600
#endif

#include <afx.h>
#include <afxinet.h>

#endif


#ifdef __cplusplus

#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <fstream>
#include <iomanip>

using namespace std;




#ifdef UNICODE

#define tstring wstring
#define  tcin	wcin 
#define  tcout	wcout 
#define tstringstream wstringstream
#define tfstram		wfstream
#define tofstream	wofstream
#define tifstream	wifstream

#else

#define  tstring string
#define tcin cin 
#define tcout cout 
#define tstringstream stringstream
#define tfstram		fstream
#define tofstream	ofstream
#define tifstream	ifstream

#endif

/** 只读字符串。 */
typedef const tstring ctstring;

typedef std::vector<std::tstring> tstringarray;

#endif //#ifdef __cplusplus


/** 基本类型. */
/* Basic data types */

#ifndef BOOL
typedef int BOOL;
#endif

/** FALSE */
#ifndef FALSE
#define FALSE 0
#endif
/** TRUE */
#ifndef TRUE
#define TRUE (!FALSE)
#endif

typedef signed char int8; 
typedef unsigned char uint8;

typedef signed short int16; 
typedef unsigned short uint16; 

typedef signed long int32;
typedef unsigned long uint32;  

#ifdef __GNUC__

typedef signed long long int64;
typedef unsigned long long uint64;

typedef int32 WPARAM;
typedef int32 LPARAM;

#else

typedef signed __int64 int64;
typedef unsigned __int64 uint64;

#endif

#ifdef __SYMBIAN32__
#define L( str ) L##str 
#endif

#if defined( __GNUC__ ) || defined ( __SYMBIAN32__ )

#ifndef _TIME32_T_DEFINED
typedef uint32 __time32_t;   /* 32-bit time value */
#define _TIME32_T_DEFINED
#endif

#ifndef _TIME64_T_DEFINED
typedef uint64 __time64_t;     /* 64-bit time value */
#define _TIME64_T_DEFINED
#endif

#if defined(UNICODE) || defined( _UNICODE )  
/*
* NOTE: This tests UNICODE, which is different from the _UNICODE define
*       used to differentiate standard C runtime calls.
*/
typedef wchar_t TCHAR;
typedef wchar_t _TCHAR;


#define _T( str ) L( str )


#else
typedef char TCHAR;
typedef char _TCHAR;
#define _T( str ) str
#endif

typedef TCHAR TBYTE,*PTCH,*PTBYTE;
typedef TCHAR *LPTCH,*PTSTR,*LPTSTR,*LP,*PTCHAR;
typedef const TCHAR *LPCTSTR;

#endif // #ifdef __GNUC__


/** 
//////////////////////////////////////////////////////////////////////////
// 最大,最小 */
#ifndef INT_MAX
#define INT_MAX (1<<30)
#endif

#ifndef INT64_MAX
#define INT64_MAX (1<<30)
#endif

#ifndef INT_MIN
#define INT_MIN (-1<<30)
#endif

/** 比较大小. */
#ifndef MAX
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#endif
#ifndef MIN
#define MIN(a,b) ((a) > (b) ? (b) : (a))
#endif

/**
//////////////////////////////////////////////////////////////////////////
// NULL */
#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif







#if defined ( __GNUC__ ) || defined( __SYMBIAN32__ )

#define INVALID_SOCKET (int)(~0)

#define _access access 
#define _mkdir mkdir

#if defined(UNICODE) || defined( _UNICODE )  

/*
* Unicode functions
*/
#define	_tprintf	wprintf
#define	_ftprintf	fwprintf
#define	_stprintf	swprintf
#define	_sntprintf	_snwprintf
#define	_vtprintf	vwprintf
#define	_vftprintf	vfwprintf
#define _vstprintf	vswprintf
#define	_vsntprintf	_vsnwprintf
#define	_tscanf		wscanf
#define	_ftscanf	fwscanf
#define	_stscanf	swscanf
#define	_fgettc		fgetwc
#define	_fgettchar	_fgetwchar
#define	_fgetts		fgetws
#define	_fputtc		fputwc
#define	_fputtchar	_fputwchar
#define	_fputts		fputws
#define	_gettc		getwc
#define	_getts		_getws
#define	_puttc		putwc
#define _puttchar       putwchar
#define	_putts		_putws
#define	_ungettc	ungetwc
#define	_tcstod		wcstod
#define	_tcstol		wcstol
#define _tcstoul	wcstoul
#define	_itot		_itow
#define	_ltot		_ltow
#define	_ultot		_ultow
#define	_ttoi		_wtoi
#define	_ttol		_wtol
#define	_tcscat		wcscat
#define _tcschr		wcschr
#define _tcscmp		wcscmp
#define _tcscpy		wcscpy
#define _tcscspn	wcscspn
#define	_tcslen		wcslen
#define	_tcsncat	wcsncat
#define	_tcsncmp	wcsncmp
#define	_tcsncpy	wcsncpy
#define	_tcspbrk	wcspbrk
#define	_tcsrchr	wcsrchr
#define _tcsspn		wcsspn
#define	_tcsstr		wcsstr
#define _tcstok		wcstok
#define	_tcsdup		_wcsdup
#define	_tcsicmp	_wcsicmp
#define	_tcsnicmp	_wcsnicmp
#define	_tcsnset	_wcsnset
#define	_tcsrev		_wcsrev
#define _tcsset		_wcsset
#define	_tcslwr		_wcslwr
#define	_tcsupr		_wcsupr
#define	_tcsxfrm	wcsxfrm
#define	_tcscoll	wcscoll
#define	_tcsicoll	_wcsicoll
#define	_istalpha	iswalpha
#define	_istupper	iswupper
#define	_istlower	iswlower
#define	_istdigit	iswdigit
#define	_istxdigit	iswxdigit
#define	_istspace	iswspace
#define	_istpunct	iswpunct
#define	_istalnum	iswalnum
#define	_istprint	iswprint
#define	_istgraph	iswgraph
#define	_istcntrl	iswcntrl
#define	_istascii	iswascii
#define _totupper	towupper
#define	_totlower	towlower
#define _tcsftime	wcsftime
/* Macro functions */ 
#define _tcsdec     _wcsdec
#define _tcsinc     _wcsinc
#define _tcsnbcnt   _wcsncnt
#define _tcsnccnt   _wcsncnt
#define _tcsnextc   _wcsnextc
#define _tcsninc    _wcsninc
#define _tcsspnp    _wcsspnp
#define _wcsdec(_wcs1, _wcs2) ((_wcs1)>=(_wcs2) ? NULL : (_wcs2)-1)
#define _wcsinc(_wcs)  ((_wcs)+1)
#define _wcsnextc(_wcs) ((unsigned int) *(_wcs))
#define _wcsninc(_wcs, _inc) (((_wcs)+(_inc)))
#define _wcsncnt(_wcs, _cnt) ((wcslen(_wcs)>_cnt) ? _count : wcslen(_wcs))
#define _wcsspnp(_wcs1, _wcs2) ((*((_wcs1)+wcsspn(_wcs1,_wcs2))) ? ((_wcs1)+wcsspn(_wcs1,_wcs2)) : NULL)

#else


/*
* Non-unicode (standard) functions
*/

#define	_tprintf	printf
#define _ftprintf	fprintf
#define	_stprintf	sprintf
#define	_sntprintf	_snprintf
#define	_vtprintf	vprintf
#define	_vftprintf	vfprintf
#define _vstprintf	vsprintf
#define	_vsntprintf	_vsnprintf
#define	_tscanf		scanf
#define	_ftscanf	fscanf
#define	_stscanf	sscanf
#define	_fgettc		fgetc
#define	_fgettchar	_fgetchar
#define	_fgetts		fgets
#define	_fputtc		fputc
#define	_fputtchar	_fputchar
#define	_fputts		fputs
#define _tfdopen	_fdopen
#define	_tfopen		fopen
#define _tfreopen	freopen
#define	_tfsopen	_fsopen
#define	_tgetenv	getenv
#define	_tputenv	_putenv
#define	_tsearchenv	_searchenv
#define  _tsystem       system
#define	_tmakepath	_makepath
#define	_tsplitpath	_splitpath
#define	_tfullpath	_fullpath
#define	_gettc		getc
#define	_getts		gets
#define	_puttc		putc
#define _puttchar       putchar
#define	_putts		puts
#define	_ungettc	ungetc
#define	_tcstod		strtod
#define	_tcstol		strtol
#define _tcstoul	strtoul
#define	_itot		_itoa
#define	_ltot		_ltoa
#define	_ultot		_ultoa
#define	_ttoi		atoi
#define	_ttol		atol
#define	_tcscat		strcat
#define _tcschr		strchr
#define _tcscmp		strcmp
#define _tcscpy		strcpy
#define _tcscspn	strcspn
#define	_tcslen		strlen
#define	_tcsncat	strncat
#define	_tcsncmp	strncmp
#define	_tcsncpy	strncpy
#define	_tcspbrk	strpbrk
#define	_tcsrchr	strrchr
#define _tcsspn		strspn
#define	_tcsstr		strstr
#define _tcstok		strtok
#define	_tcsdup		_strdup
#define	_tcsicmp	_stricmp
#define	_tcsnicmp	_strnicmp
#define	_tcsnset	_strnset
#define	_tcsrev		_strrev
#define _tcsset		_strset
#define	_tcslwr		_strlwr
#define	_tcsupr		_strupr
#define	_tcsxfrm	strxfrm
#define	_tcscoll	strcoll
#define	_tcsicoll	_stricoll
#define	_istalpha	isalpha
#define	_istupper	isupper
#define	_istlower	islower
#define	_istdigit	isdigit
#define	_istxdigit	isxdigit
#define	_istspace	isspace
#define	_istpunct	ispunct
#define	_istalnum	isalnum
#define	_istprint	isprint
#define	_istgraph	isgraph
#define	_istcntrl	iscntrl
#define	_istascii	isascii
#define _totupper	toupper
#define	_totlower	tolower
#define	_tasctime	asctime
#define	_tctime		ctime
#define	_tstrdate	_strdate
#define	_tstrtime	_strtime
#define	_tutime		_utime
#define _tcsftime	strftime
/* Macro functions */ 
#define _tcsdec     _strdec
#define _tcsinc     _strinc
#define _tcsnbcnt   _strncnt
#define _tcsnccnt   _strncnt
#define _tcsnextc   _strnextc
#define _tcsninc    _strninc
#define _tcsspnp    _strspnp
#define _strdec(_str1, _str2) ((_str1)>=(_str2) ? NULL : (_str2)-1)
#define _strinc(_str)  ((_str)+1)
#define _strnextc(_str) ((unsigned int) *(_str))
#define _strninc(_str, _inc) (((_str)+(_inc)))
#define _strncnt(_str, _cnt) ((strlen(_str)>_cnt) ? _count : strlen(_str))
#define _strspnp(_str1, _str2) ((*((_str1)+strspn(_str1,_str2))) ? ((_str1)+strspn(_str1,_str2)) : NULL)

#define _tchmod     _chmod
#define _tcreat     _creat
#define _tfindfirst _findfirst
#define _tfindnext  _findnext
#define _tmktemp    _mktemp
#define _topen      _open
#define _taccess    _access
#define _tremove    remove
#define _trename    rename
#define _tsopen     _sopen
#define _tsetlocale setlocale
#define _tunlink    _unlink
#define _tfinddata_t    _finddata_t
#define _tchdir	    _chdir
#define _tgetcwd    _getcwd
#define _tgetdcwd   _getdcwd
#define _tmkdir	    _mkdir
#define _trmdir	    _rmdir
#define _tstat      _stat

#endif

#endif

