
// Step2_CSE472.h : main header file for the Step2_CSE472 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CStep2_CSE472App:
// See Step2_CSE472.cpp for the implementation of this class
//

class CStep2_CSE472App : public CWinAppEx
{
public:
	CStep2_CSE472App();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CStep2_CSE472App theApp;
