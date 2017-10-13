// ConnectSocket.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "IOCP_Client.h"
#include "IOCP_ClientDlg.h"
#include "ConnectSocket.h"


// CConnectSocket

CConnectSocket::CConnectSocket()
{
}

CConnectSocket::~CConnectSocket()
{
}


// CConnectSocket 멤버 함수

void CConnectSocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	ShutDown();
	Close();

	CSocket::OnClose(nErrorCode);

	AfxMessageBox("서버와의 연결이 종료 되었다.");
	::PostQuitMessage(0);
}

void CConnectSocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	TCHAR szBuffer[1024] = {0, };

	if(Receive(szBuffer, sizeof(szBuffer)) > 0)
	{
		CIOCP_ClientDlg* pMain = (CIOCP_ClientDlg*)AfxGetMainWnd();
		pMain->m_List.AddString(szBuffer);
		pMain->m_List.SetCurSel(pMain->m_List.GetCount() -1);
	}

	CSocket::OnReceive(nErrorCode);
}
