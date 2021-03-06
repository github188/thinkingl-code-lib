#pragma once

#include "KedaGiftDefine.h"
#include "iniparse.h"


class CEmployerGiftConfig
{
public:
	CEmployerGiftConfig(void);
	~CEmployerGiftConfig(void);

	/** 获取已经中奖的人. */
	TEmployerList GetLuckies();

	/** 添加一个中奖的人. */
	void AddLuckMan( const CEmployer& lucyMan );

	/** 重置. */
	void Reset();

	/** 获取一个已经中奖的人. */
	BOOL GetEmployerLucky( LPCTSTR strKedaNo, CEmployer& employer );

private:
	/** ini配置文件解析. */
	CIniParse m_iniFileParser;
};

