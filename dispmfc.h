// dispmfc.h : DISPMFC �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#if !defined(AFX_DISPMFC_H__9E0F1454_2A16_11D4_9298_00A0CC667AAB__INCLUDED_)
#define AFX_DISPMFC_H__9E0F1454_2A16_11D4_9298_00A0CC667AAB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// CDispmfcApp:
// ���̃N���X�̓���̒�`�Ɋւ��Ă� dispmfc.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class CDispmfcApp : public CWinApp
{
public:
	CDispmfcApp();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CDispmfcApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����

	//{{AFX_MSG(CDispmfcApp)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_DISPMFC_H__9E0F1454_2A16_11D4_9298_00A0CC667AAB__INCLUDED_)
