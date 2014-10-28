#if !defined(AFX_DELTER_H__2445F885_1D69_44F3_A1FA_897A469DB783__INCLUDED_)
#define AFX_DELTER_H__2445F885_1D69_44F3_A1FA_897A469DB783__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Delter.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDelter dialog
#include "Creat.h"
extern ITEM str[100];
class CDelter : public CDialog
{
// Construction
public:
	CDelter(CWnd* pParent = NULL);   // standard constructor
	CCreat   m_Creat;
// Dialog Data
	//{{AFX_DATA(CDelter)
	enum { IDD = IDD_DIALOG2 };
	CString	m_Name;
	CString	m_ID;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDelter)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDelter)
	afx_msg void OnDelter();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELTER_H__2445F885_1D69_44F3_A1FA_897A469DB783__INCLUDED_)
