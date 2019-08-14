#include <windows.h>    					//Windows�����ͷ�ļ�
//ȫ�ֱ���
char szTitle[]="�ҵ�Windows����";    		//�������ַ���
char szWindowClass[]="WinAPI";    			//��������
//��ǰ���ú���ԭ������
ATOM    MyRegisterClass(HINSTANCE);
BOOL    InitInstance(HINSTANCE,int);
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
//������
int APIENTRY WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,int  nCmdShow)
{
    MSG msg;    						//������Ϣ�ṹ����
  MyRegisterClass(hInstance);    			//ע�ᴰ��
    //��ʼ��
    if(!InitInstance(hInstance,nCmdShow))  return FALSE;
    //��Ϣѭ��
    while(GetMessage(&msg,NULL,0,0))    	//PostQuitMessage(0)������Ϣѭ��
    {
		TranslateMessage(&msg);    		//������Ϣ
		DispatchMessage(&msg);    		//����Ϣ��Ӵ�������ָ��
    }
    return msg.wParam;    				//������Ϣѭ������PostQuitMessage
}
//����MyRegisterClass()����ע�ᴰ����
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASS wc;    					//�������ڽṹ����
    //��ʼ������wc����ֵ
    wc.style         =CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc  =(WNDPROC)WndProc;    //�ص������ĺ���ָ��
    wc.cbClsExtra    =0;
    wc.cbWndExtra  =0;
    wc.hInstance     =hInstance;
    wc.hIcon         =LoadIcon(NULL,IDI_APPLICATION);
    wc.hCursor       =LoadCursor(NULL,IDC_ARROW);
    wc.hbrBackground =(HBRUSH)GetStockObject(WHITE_BRUSH);
    wc.lpszMenuName  =NULL;
    wc.lpszClassName =szWindowClass;
	return RegisterClass(&wc);    //ע��
}
//����InitInstanee(HANDLE,int)����������
BOOL InitInstance(HINSTANCE hInstance,int nCmdShow)
{
    HWND hWnd;    				//�������ھ��
    //ʹ��CreateWindow()�����������ڲ����ؾ��
    hWnd=CreateWindow(    			//�������
		szWindowClass,    			//��������
		szTitle,    					//����������
		WS_OVERLAPPEDWINDOW | 	//��ʾ��ʽ
		WS_VSCROLL |     			//����ˮƽ������
		WS_HSCROLL,    			//���д�ֱ������
		CW_USEDEFAULT,    		//X���������
		CW_USEDEFAULT,    		//Y���������
		CW_USEDEFAULT,    		//���ڿ��
		CW_USEDEFAULT,    		//���ڸ߶�
		NULL,    					//�����ھ��
		NULL,    					//���ڲ˵����
		hInstance,    				//ʵ�����
		NULL    					//��������
		);
    if(!hWnd)  return FALSE;    		//�ж��Ƿ񴴽��ɹ�
    ShowWindow(hWnd,nCmdShow);    //�����ɹ�����ʾ����
    UpdateWindow(hWnd);    			//�ͳ�WM_PAINT��Ϣ
    return TRUE;    					//���ش����ɹ���־
}
//����WndProc(HWND,unsigned,WORD,LONG)���������ڷ�������Ϣ.
LRESULT CALLBACK WndProc(HWND  hWnd, UINT message,
    WPARAM  wParam, LPARAM  lParam)
{
    PAINTSTRUCT ps;
    HDC hdc;
   char szZRF[]="ZRF and SSH";
    switch(message)    //ɸѡ��Ϣ
	{
		case WM_PAINT:    		//�����ڻ�ͼ��Ϣ
			hdc=BeginPaint(hWnd,&ps);
			TextOut(hdc,120,100,szZRF,strlen(szZRF));
			EndPaint(hWnd,&ps);
			break;
		case WM_DESTROY:  	//�����Ѿ�����,׼��������������
			PostQuitMessage(0);	//����WM-QUIT��Ϣ��������Ϣѭ��
			break;
		default:    				//����ϵͳ��Ϣ
			return DefWindowProc(hWnd,message,wParam,lParam);
    }
    return 0;
}
