// _OSDlg.h : header file
//

#if !defined(AFX__OSDLG_H__B998584F_7E6A_4EE0_AB67_5E16B936EAF2__INCLUDED_)
#define AFX__OSDLG_H__B998584F_7E6A_4EE0_AB67_5E16B936EAF2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// C_OSDlg dialog

class C_OSDlg : public CDialog
{
// Construction
public:
	C_OSDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(C_OSDlg)
	enum { IDD = IDD__OS_DIALOG };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C_OSDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(C_OSDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCreate();
	afx_msg void OnDel();
	afx_msg void OnDisplay();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__OSDLG_H__B998584F_7E6A_4EE0_AB67_5E16B936EAF2__INCLUDED_)
