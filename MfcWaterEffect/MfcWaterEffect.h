
// MfcWaterEffect.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMfcWaterEffectApp: 
// �йش����ʵ�֣������ MfcWaterEffect.cpp
//

class CMfcWaterEffectApp : public CWinApp
{
public:
	CMfcWaterEffectApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMfcWaterEffectApp theApp;