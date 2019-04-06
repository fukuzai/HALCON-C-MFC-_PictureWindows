// dispmfcDlg.h : ヘッダー ファイル
//

#if !defined(AFX_DISPMFCDLG_H__9E0F1456_2A16_11D4_9298_00A0CC667AAB__INCLUDED_)
#define AFX_DISPMFCDLG_H__9E0F1456_2A16_11D4_9298_00A0CC667AAB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDispmfcDlg ダイアログ

class CDispmfcDlg : public CDialog
{
// 構築
public:
	CDispmfcDlg(CWnd* pParent = NULL);	// 標準のコンストラクタ

// ダイアログ データ
	//{{AFX_DATA(CDispmfcDlg)
	enum { IDD = IDD_DISPMFC_DIALOG };
		// メモ: この位置に ClassWizard によってデータ メンバが追加されます。
	//}}AFX_DATA

	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CDispmfcDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV のサポート
	//}}AFX_VIRTUAL

// インプリメンテーション
protected:
	HICON m_hIcon;

	// 生成されたメッセージ マップ関数
	//{{AFX_MSG(CDispmfcDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_DISPMFCDLG_H__9E0F1456_2A16_11D4_9298_00A0CC667AAB__INCLUDED_)
