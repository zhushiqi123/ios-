#include <afxwin.h>
class CZRFWindow:public CFrameWnd//��������
{public:
	CZRFWindow()	{		Create(0,"This is ZRF MFC Window");	}
};
class CZRFApp:public CWinApp//Ӧ�ó�����
{public:
	virtual BOOL InitInstance()
	{	m_pMainWnd=new CZRFWindow();
		m_pMainWnd->ShowWindow(SW_SHOWMAXIMIZED);
		return TRUE;
	}
};
CZRFApp ZRF_MFCApp;
