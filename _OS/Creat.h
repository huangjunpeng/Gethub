#if !defined(AFX_CREAT_H__5758789E_7BAB_41BC_B368_77A6F4EF8047__INCLUDED_)
#define AFX_CREAT_H__5758789E_7BAB_41BC_B368_77A6F4EF8047__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Creat.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCreat dialog

extern ITEM str[100];
class CCreat : public CDialog
{
// Construction
public:
	CCreat(CWnd* pParent = NULL);   // standard constructor
//	ITEM str[100];
// Dialog Data
	//{{AFX_DATA(CCreat)
	enum { IDD = IDD_DIALOG1 };
	CString	m_strName;
	CString	m_strID;
	CString	m_strTime;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCreat)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCreat)
	afx_msg void OnCreat();
	afx_msg void OnTimer(UINT nIDEvent);
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CREAT_H__5758789E_7BAB_41BC_B368_77A6F4EF8047__INCLUDED_)
