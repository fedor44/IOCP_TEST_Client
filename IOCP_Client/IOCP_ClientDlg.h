
// IOCP_ClientDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"
#include "ConnectSocket.h"

// CIOCP_ClientDlg 대화 상자
class CIOCP_ClientDlg : public CDialog
{
// 생성입니다.
public:
	CIOCP_ClientDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_IOCP_CLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
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
