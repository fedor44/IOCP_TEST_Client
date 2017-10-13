
// IOCP_ClientDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"
#include "ConnectSocket.h"

// CIOCP_ClientDlg ��ȭ ����
class CIOCP_ClientDlg : public CDialog
{
// �����Դϴ�.
public:
	CIOCP_ClientDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_IOCP_CLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_strMessage;
	CListBox m_List;

	CConnectSocket m_Socket;
	afx_msg void OnBnClickedButton1();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
