// Display.cpp : implementation file
//

#include "stdafx.h"
#include "_OS.h"
#include "Display.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDisplay dialog

//extern ITEM str[100];
CDisplay::CDisplay(CWnd* pParent /*=NULL*/)
	: CDialog(CDisplay::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDisplay)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	
}


void CDisplay::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDisplay)
	DDX_Control(pDX, IDC_LIST, m_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDisplay, CDialog)
	//{{AFX_MSG_MAP(CDisplay)
	ON_BN_CLICKED(IDC_BUTTON1, OnDisplay)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDisplay message handlers

BOOL CDisplay::OnInitDialog() //初始化对话框   
{
	CDialog::OnInitDialog();
	//初始化列表框
	LONG lStyle;
	lStyle=GetWindowLong(m_list.m_hWnd,GWL_STYLE);
	lStyle&=~LVS_TYPEMASK;
	lStyle|=LVS_REPORT;
	SetWindowLong(m_list.m_hWnd,GWL_STYLE,lStyle);
	DWORD DwStyle=m_list.GetExtendedStyle();
	DwStyle|=LVS_EX_FULLROWSELECT;
	DwStyle|=LVS_EX_GRIDLINES;
	m_list.SetExtendedStyle(DwStyle);
	CRect rc;
	m_list.GetClientRect(rc);
	int width=rc.Width()/3;
	m_list.InsertColumn(0,"进程名",LVCFMT_CENTER,width);
	m_list.InsertColumn(1,"进程ID",LVCFMT_CENTER,width);
	m_list.InsertColumn(2,"运行时间",LVCFMT_CENTER,width);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
//
void CDisplay::OnDisplay() 
{	
	UpdateData(true);
	long ti=GetTickCount();
	for(int a=0;a<i;a++)
	{
		H_A[i].Format("%d",(ti-t[i])/1000);
	}
	/*CString ss_test;
    ss_test.Format("%d",i);
    MessageBox(ss_test);*/
	for(int n=0;n<i;n++)
	{
		int count=m_list.GetItemCount();
		m_list.InsertItem(count,str[n].NAME);
		m_list.SetItemText(count,1,str[n].ID);
		m_list.SetItemText(count,2,H_A[i]);
	}
	
}

void CDisplay::OnTimer(UINT nIDEvent) 
{	
	
	CDialog::OnTimer(nIDEvent);
}
