#if !defined(AFX_DISPLAY_H__C1CB1681_E06F_418C_8D20_43245C737E2D__INCLUDED_)
#define AFX_DISPLAY_H__C1CB1681_E06F_418C_8D20_43245C737E2D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Display.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDisplay dialog
#include "Creat.h"
extern ITEM str[100];
class CDisplay : public CDialog
{
// Construction
public:
	CDisplay(CWnd* pParent = NULL);   // standard constructor
	CCreat m_p;
// Dialog Data
	//{{AFX_DATA(CDisplay)
	enum { IDD = IDD_DIALOG3 };
	CListCtrl	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDisplay)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDisplay)
	virtual BOOL OnInitDialog();
	afx_msg void OnDisplay();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DISPLAY_H__C1CB1681_E06F_418C_8D20_43245C737E2D__INCLUDED_)
