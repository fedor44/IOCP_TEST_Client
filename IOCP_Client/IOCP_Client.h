
// IOCP_Client.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CIOCP_ClientApp:
// �� Ŭ������ ������ ���ؼ��� IOCP_Client.cpp�� �����Ͻʽÿ�.
//

class CIOCP_ClientApp : public CWinAppEx
{
public:
	CIOCP_ClientApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CIOCP_ClientApp theApp;