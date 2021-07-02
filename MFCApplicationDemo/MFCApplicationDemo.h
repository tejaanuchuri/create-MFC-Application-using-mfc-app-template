
// MFCApplicationDemo.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCApplicationDemoApp:
// See MFCApplicationDemo.cpp for the implementation of this class
//

class CMFCApplicationDemoApp : public CWinApp
{
public:
	CMFCApplicationDemoApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplicationDemoApp theApp;
