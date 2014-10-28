// Creat.cpp : implementation file
//

#include "stdafx.h"
#include "_OS.h"
#include "Creat.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCreat dialog
CCreat::CCreat(CWnd* pParent /*=NULL*/)
	: CDialog(CCreat::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCreat)
	m_strName = _T("");
	m_strID = _T("");
	m_strTime = _T("");
	m_strTime="00:00:00";
	//i=0;
	//}}AFX_DATA_INIT
}


void CCreat::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCreat)
	DDX_Text(pDX, IDC_EDIT1, m_strName);
	DDX_Text(pDX, IDC_EDIT2, m_strID);
	DDX_Text(pDX, IDC_EDIT3, m_strTime);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCreat, CDialog)
	//{{AFX_MSG_MAP(CCreat)
	ON_BN_CLICKED(IDC_CREAT, OnCreat)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCreat message handlers

void CCreat::OnCreat() 
{
	
	UpdateData(true);
	t[i]=GetTickCount();
/*	CString ss_test;
    ss_test.Format("%d",i);
	MessageBox(ss_test);*///将整形转化为字符串
	if(i<100&&i>=0)
	{	
		//memcpy(str[i].NAME,m_strName,m_strName.GetLength()); 
		//memcpy(str[i].ID,m_strID,m_strID.GetLength());
		//memcpy(str[i].TIME,m_strTime,m_strTime.GetLength());
		//str[i].NAME=m_strName;
		//str[i].ID=m_strID;
		//str[i].TIME=m_strTime;
		strncpy(str[i].NAME,(LPCTSTR)m_strName,sizeof(str[i].NAME));
		strncpy(str[i].ID,(LPCTSTR)m_strName,sizeof(str[i].ID));
		//strncpy(str[i].TIME,(LPCTSTR)m_strName,sizeof(str[i].TIME));
		MessageBox("进程创建成功");
	}
	else
	{
		AfxMessageBox("i值不是一个大于等于零或小于100的整数");
	}
	clock_t timeBegin = clock();
	Sleep(100);
	clock_t timeFinish = clock();

	i++;
	CDialog::OnOK();                                                        
}

void CCreat::OnTimer(UINT nIDEvent) 
{

	CDialog::OnTimer(nIDEvent);
}

BOOL CCreat::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	SetTimer(1,1000,NULL);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
