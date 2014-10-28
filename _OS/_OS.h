// _OS.h : main header file for the _OS application
//

#if !defined(AFX__OS_H__70BA2832_0512_4EC7_BEB3_97D7D43222B5__INCLUDED_)
#define AFX__OS_H__70BA2832_0512_4EC7_BEB3_97D7D43222B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// C_OSApp:
// See _OS.cpp for the implementation of this class
//
extern  i;
extern long t[100];
extern CString H_A[100];
typedef struct 
{ 
	char NAME[20]; 
	char ID[20];        
	char TIME[20];
}ITEM;
class C_OSApp : public CWinApp
{
public:
	C_OSApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C_OSApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(C_OSApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__OS_H__70BA2832_0512_4EC7_BEB3_97D7D43222B5__INCLUDED_)
