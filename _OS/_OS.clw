; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=C_OSDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "_OS.h"

ClassCount=6
Class1=C_OSApp
Class2=C_OSDlg
Class3=CAboutDlg

ResourceCount=6
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG1
Class4=CCreat
Resource4=IDD_DIALOG2
Class5=CDelter
Resource5=IDD__OS_DIALOG
Class6=CDisplay
Resource6=IDD_DIALOG3

[CLS:C_OSApp]
Type=0
HeaderFile=_OS.h
ImplementationFile=_OS.cpp
Filter=N

[CLS:C_OSDlg]
Type=0
HeaderFile=_OSDlg.h
ImplementationFile=_OSDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_BUTTON2

[CLS:CAboutDlg]
Type=0
HeaderFile=_OSDlg.h
ImplementationFile=_OSDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD__OS_DIALOG]
Type=1
Class=C_OSDlg
ControlCount=3
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON2,button,1342242816
Control3=IDC_BUTTON3,button,1342242816

[DLG:IDD_DIALOG1]
Type=1
Class=CCreat
ControlCount=7
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631552
Control3=IDC_EDIT3,edit,1350633600
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_CREAT,button,1342242816

[CLS:CCreat]
Type=0
HeaderFile=Creat.h
ImplementationFile=Creat.cpp
BaseClass=CDialog
Filter=D
LastObject=CCreat
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CDelter
ControlCount=5
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_BUTTON1,button,1342242816

[CLS:CDelter]
Type=0
HeaderFile=Delter.h
ImplementationFile=Delter.cpp
BaseClass=CDialog
Filter=D
LastObject=CDelter
VirtualFilter=dWC

[DLG:IDD_DIALOG3]
Type=1
Class=CDisplay
ControlCount=2
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_LIST,SysListView32,1350631424

[CLS:CDisplay]
Type=0
HeaderFile=Display.h
ImplementationFile=Display.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LIST
VirtualFilter=dWC

