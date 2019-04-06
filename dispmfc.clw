; CLW ファイルは MFC ClassWizard の情報を含んでいます。

[General Info]
Version=1
LastClass=CDispmfcDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "dispmfc.h"

ClassCount=4
Class1=CDispmfcApp
Class2=CDispmfcDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_DISPMFC_DIALOG

[CLS:CDispmfcApp]
Type=0
HeaderFile=dispmfc.h
ImplementationFile=dispmfc.cpp
Filter=N

[CLS:CDispmfcDlg]
Type=0
HeaderFile=dispmfcDlg.h
ImplementationFile=dispmfcDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=dispmfcDlg.h
ImplementationFile=dispmfcDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DISPMFC_DIALOG]
Type=1
Class=CDispmfcDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC1,static,1342177287

