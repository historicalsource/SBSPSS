; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMapEditView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "mapedit.h"
LastPage=0

ClassCount=12
Class1=CChildFrame
Class2=CGLEnabledView
Class3=CMainFrame
Class4=CMapEditApp
Class5=CAboutDlg
Class6=CMapEditDoc
Class7=CMapEditView

ResourceCount=10
Resource1=IDD_ABOUTBOX (English (U.S.))
Resource2=IDD_MULTIBAR (English (U.S.))
Resource3=IDD_GFXTOOLBAR
Resource4=IDD_DIALOGBAR (English (U.S.))
Resource5=IDR_MAPEDITYPE (English (U.S.))
Class8=CMultiBar
Resource6=IDD_MAPSIZE
Resource7=IDD_TILESET_DIALOG
Class9=CLayerList
Class10=CTileSetDlg
Resource8=IDR_MAINFRAME (English (U.S.))
Class11=CGfxToolBar
Resource9=IDD_LAYER_LIST_DIALOG
Class12=CMapSizeDlg
Resource10=IDR_TOOLBAR (English (U.S.))

[CLS:CChildFrame]
Type=0
BaseClass=CMDIChildWnd
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp

[CLS:CGLEnabledView]
Type=0
BaseClass=CView
HeaderFile=GLEnabledView.h
ImplementationFile=GLEnabledView.cpp

[CLS:CMainFrame]
Type=0
BaseClass=CMDIFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
LastObject=CMainFrame

[CLS:CMapEditApp]
Type=0
BaseClass=CWinApp
HeaderFile=MapEdit.h
ImplementationFile=MapEdit.cpp
LastObject=CMapEditApp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=MapEdit.cpp
ImplementationFile=MapEdit.cpp
LastObject=CAboutDlg

[CLS:CMapEditDoc]
Type=0
BaseClass=CDocument
HeaderFile=MapEditDoc.h
ImplementationFile=MapEditDoc.cpp
LastObject=ID_MIRRORX

[CLS:CMapEditView]
Type=0
BaseClass=CGLEnabledView
HeaderFile=MapEditView.h
ImplementationFile=MapEditView.cpp
LastObject=CMapEditView
Filter=C
VirtualFilter=VWC

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg

[TB:IDR_TOOLBAR (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_TOOLBAR_TILEPALETTE
Command8=ID_TOOLBAR_GRID
CommandCount=8

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_MRU_FILE1
Command4=ID_APP_EXIT
Command5=ID_VIEW_TOOLBAR
Command6=ID_VIEW_STATUS_BAR
Command7=ID_APP_ABOUT
CommandCount=7

[MNU:IDR_MAPEDITYPE (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_MRU_FILE1
Command7=ID_APP_EXIT
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_VIEW_TOOLBAR
Command13=ID_VIEW_STATUS_BAR
Command14=ID_MAP_SETSIZE
Command15=ID_TOGGLE_GRID
Command16=ID_MIRRORX
Command17=ID_MIRRORY
Command18=ID_ACTIVEBRUSH_LEFT
Command19=ID_ACTIVEBRUSH_RIGHT
Command20=ID_TOGGLE_TILEVIEW
Command21=ID_2D_3D_TOGGLE
Command22=ID_WINDOW_NEW
Command23=ID_WINDOW_CASCADE
Command24=ID_WINDOW_TILE_HORZ
Command25=ID_WINDOW_ARRANGE
Command26=ID_APP_ABOUT
CommandCount=26

[ACL:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_ACTIVEBRUSH_LEFT
Command2=ID_ACTIVEBRUSH_RIGHT
Command3=ID_2D_3D_TOGGLE
Command4=ID_EDIT_COPY
Command5=ID_TOGGLE_GRID
Command6=ID_FILE_NEW
Command7=ID_FILE_OPEN
Command8=ID_FILE_SAVE
Command9=ID_EDIT_PASTE
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_TOGGLE_TILEVIEW
Command15=ID_NEXT_PANE
Command16=ID_PREV_PANE
Command17=ID_MIRRORX
Command18=ID_EDIT_CUT
Command19=ID_MIRRORY
Command20=ID_EDIT_UNDO
CommandCount=20

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=?
ControlCount=3
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDOK,button,1342373889

[DLG:IDD_DIALOGBAR (English (U.S.))]
Type=1
Class=?
ControlCount=3
Control1=IDC_STATIC,static,1342308352
Control2=IDC_CHECK1,button,1342242819
Control3=IDC_RADIO1,button,1342177289

[CLS:CMultiBar]
Type=0
HeaderFile=multibar.h
ImplementationFile=multibar.cpp
BaseClass=CDialogBar
LastObject=CMultiBar
Filter=D
VirtualFilter=dWC

[DLG:IDD_MULTIBAR (English (U.S.))]
Type=1
Class=CMultiBar
ControlCount=0

[DLG:IDD_LAYER_LIST_DIALOG]
Type=1
Class=CLayerList
ControlCount=1
Control1=IDC_LAYER_LIST,listbox,1352728915

[CLS:CLayerList]
Type=0
HeaderFile=LayerList.h
ImplementationFile=LayerList.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CLayerList

[DLG:IDD_TILESET_DIALOG]
Type=1
Class=CTileSetDlg
ControlCount=3
Control1=IDC_TILESETDLG_COMBO,combobox,1342242819
Control2=IDC_TILESETDLG_BTN_UPDATE,button,1342242816
Control3=IDC_TILESETDLG_BTN_LOAD,button,1342242816

[CLS:CTileSetDlg]
Type=0
HeaderFile=TileSetDlg.h
ImplementationFile=TileSetDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_TILESETDLG_COMBO

[CLS:CGfxToolBar]
Type=0
HeaderFile=GfxToolBar.h
ImplementationFile=GfxToolBar.cpp
BaseClass=CDialog
Filter=D
LastObject=CGfxToolBar
VirtualFilter=dWC

[DLG:IDD_GFXTOOLBAR]
Type=1
Class=CGfxToolBar
ControlCount=3
Control1=IDD_GFXTOOLBAR_PAINT,button,1342177344
Control2=IDD_GFXTOOLBAR_SELECT,button,1476395072
Control3=IDD_GFXTOOLBAR_PICKER,button,1476395072

[DLG:IDD_MAPSIZE]
Type=1
Class=CMapSizeDlg
ControlCount=7
Control1=IDOK,button,1342177281
Control2=IDCANCEL,button,1342177280
Control3=IDC_MAPSIZE_WIDTH_TEXT,static,1342308866
Control4=IDC_MAPSIZE_WIDTH,edit,1350639744
Control5=IDC_MAPSIZE_HEIGHT_TEXT,static,1342308866
Control6=IDC_MAPSIZE_HEIGHT,edit,1350639744
Control7=IDC_MAPSIZE_WARNING,static,1342308352

[CLS:CMapSizeDlg]
Type=0
HeaderFile=MapSizeDlg.h
ImplementationFile=MapSizeDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

