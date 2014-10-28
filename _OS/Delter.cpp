// Delter.cpp : implementation file
//

#include "stdafx.h"
#include "_OS.h"
#include "Delter.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDelter dialog

//extern ITEM str[100];
CDelter::CDelter(CWnd* pParent /*=NULL*/)
	: CDialog(CDelter::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDelter)
	m_Name = _T("");
	m_ID = _T("");

	//}}AFX_DATA_INIT
}


void CDelter::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDelter)
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	DDX_Text(pDX, IDC_EDIT2, m_ID);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDelter, CDialog)
	//{{AFX_MSG_MAP(CDelter)
	ON_BN_CLICKED(IDC_BUTTON1, OnDelter)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
/////////////////////////////////////////////////////////////////////////////
// CDelter message handler
void CDelter::OnDelter() 
{
	//MessageBox(str[i-1].NAME);
	UpdateData(true);
	/*CString ss_test;
    ss_test.Format("%d",i);
    MessageBox(ss_test);*/
	int Num=0;
	for(Num=0;Num<i;Num++)
	{
		if(m_Name==str[Num].NAME&&m_ID==str[Num].ID)
		{	for(int a=Num;a<i;a++)
			{
				str[a]=str[a+1];
			}
			MessageBox("进程撤销成功!");
			i--;
			break;
		}
		else
			MessageBox("该进程不存在!");
	}
	
	CDialog::OnOK();
	//
	
}
