
// MfcWaterEffectDlg.h : ͷ�ļ�
//

#pragma once
#include "watereffect/DIB.h"
#include "watereffect/stdex_vector.h"
#include "watereffect/WaterEffect.h"

// CMfcWaterEffectDlg �Ի���
class CMfcWaterEffectDlg : public CDialogEx
{
// ����
public:
	CMfcWaterEffectDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCWATEREFFECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CWaterEffect m_waterEffect;
	CDib m_renderSrc;
	CDib m_renderDest;
};

#define ID_EFFECTTIMER 1111
#define ID_DROPTIMER 1112
