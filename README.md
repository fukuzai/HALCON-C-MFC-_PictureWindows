# HALCON/C++(MFC)_PictureWindows
MicroSoft Visual C++のMFCプログラムでダイアログ上にHALCONのウィンドウを作成して画像を表示する。


# Requirements
## master
オリジナルのプロジェクトファイルはこちらからダウンロード。
VS2005なんてもう使ってない・・・。
https://linx.jp/faq/hal0135
<ol>
<li>Microsoft Visual C++ 6.0</li>
</ol>

## branch
Visual Studio 2015とHALCON18.11で動作確認してみた。
<ol>
<li>Windows10</li>
<li>Microsoft Visual 2015</li>
<li>HALCON 18.11</li>
</ol>

# 作成要領
<ol>
<li>Microsoft Visual C++ 6.0を起動します。</li>
<li>新規作成でMFC AppWizard(exe)を選択します。プロジェクト名を指定します。</li>
<li>簡単のためダイアログベースのアプリケーションを指定します。必要であれば他形式のアプリケーション形体でもかまいません。</li>
<li>その他はデフォルトでアプリケーションウィザードを終了して下さい。</li>
<li>ダイアログ画面が表示されます。ボタンが2つあります。画面中央のテキストは必要ないので削除して下さい。</li>
<li>コモンコントロールからピクチャを選択しダイアログに適当なウィンドウを作成して下さい。</li>
<li>ピクチャウィンドウのIDを設定します。ピクチャウィンドウを選択して下さい。枠が白く表示されます。その状態でマウスを右クリックしプロパティを選択して下さい。一般→IDがピクチャウィンドウのIDを示しています。複数のウィンドウを作成する場合などはこのIDでウィンドウが区別されます。デフォルトではIDC_STATICが表示されています。ここでは仮にIDC_STATIC1と設定します。複数のウィンドウを使用するにはそれぞれ違う変数を指定します。枠が白く表示された状態でその枠の上で右クリックして下さい。そうでないとダイアログ自体のプロパティが選択される事があります。</li>
<li>画像をファイルから読み込みウィンドウに表示する簡単なものを作成します。HDevelopで下記のようなプログラムを作成します。<br>
read_image (Image, 'monkey')<br>
dev_close_window ()<br>
dev_open_window (0, 0, 512, 512, 'black', WindowHandle)<br>
dev_display (Image)<br>
このプログラムをcpp形式で保存して下さい。<br>
<lo>OKボタンにHALCONのプログラムを埋め込みます。OKボタンをダブルクリックします。メンバ関数名を聞かれます。デフォルトのままOKを選択して下さい。<br>
  プログラムにOKボタンを押した時に実行される関数が自動的に作成されます。<br>
#include "HalconCpp.h"<br>
void CDispmfcDlg::OnOK() <br>
{<br>
// TODO: この位置にその他の検証用のコードを追加してください<br>
  HTuple   WindowHandle;<br>
  Hobject  Image;<br>
//***** ウインドウハンドルの取得 **************************************
CWnd *wnd; wnd = GetDlgItem(IDC_STATIC1); 
HWND hWnd = wnd->m_hWnd;
CRect rect;

// ピクチャー IDC_STATIC1のウィンドウの領域サイズを取得する
wnd->GetClientRect(rect); 
set_window_attr("background_color","black");
set_check("~father");// 子ウィンドウを設定
// ピクチャーのウィンドウの領域にHALCONのウィンドーを開く
open_window(rect.top,rect.left,rect.right,rect.bottom,(long)hWnd,"visible","",&WindowHandle); 
set_check("father"); // 親ウィンドウの設定に戻す。
//*********************************************************************
  { Herror err = read_image(&Image,"monkey");
  if (err != H_MSG_TRUE) { fprintf(stderr,"could not find image"); exit(1); }}
  // dev_close_window(); no window open in C++
//  ::set_window_attr("background_color","black");
//  ::open_window(0,0,512,512,0,"","",&WindowHandle);
  ::disp_obj(Image,WindowHandle);
  // CDialog::OnOK();
}

	hファイルを関数の外側に定義して下さい。<br>
	HALCONで使用する変数を定義します。<br>
	ピクチャウィンドウのハンドルを取得しそれをopen_windowと関連付けます。</li>

<li>HALCONのライブラリを追加します。プロジェクト→設定→リンクでhalconcpp.libを追加します。<br>
  このファイルの場所にパスが設定されている必要があります。詳しくは操作手順所を参照下さい。</li>
<li>プログラムを実行して下さい。OKを押すとピクチャウィンドウに画像が表示されます。</li>
<ol>

ここで、MFCの環境でHALCONの結果をピクチャウィンドウに表示する方法について説明しました。<br>
各種コントロールとプログラムを連結する事でMFCを使用したGUIプログラム開発が可能です。<br>
