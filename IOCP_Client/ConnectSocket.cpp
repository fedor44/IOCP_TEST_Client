// ConnectSocket.cpp : ���� �����Դϴ�.
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


// CConnectSocket ��� �Լ�

void CConnectSocket::OnClose(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	ShutDown();
	Close();

	CSocket::OnClose(nErrorCode);

	AfxMessageBox("�������� ������ ���� �Ǿ���.");
	::PostQuitMessage(0);
}

void CConnectSocket::OnReceive(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	TCHAR szBuffer[1024] = {0, };

	if(Receive(szBuffer, sizeof(szBuffer)) > 0)
	{
		CIOCP_ClientDlg* pMain = (CIOCP_ClientDlg*)AfxGetMainWnd();
		pMain->m_List.AddString(szBuffer);
		pMain->m_List.SetCurSel(pMain->m_List.GetCount() -1);
	}

	CSocket::OnReceive(nErrorCode);
}
