#include <windows.h>    					//Windows程序的头文件
//全局变量
char szTitle[]="我的Windows程序";    		//标题条字符串
char szWindowClass[]="WinAPI";    			//窗口类名
//向前引用函数原型声明
ATOM    MyRegisterClass(HINSTANCE);
BOOL    InitInstance(HINSTANCE,int);
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
//主函数
int APIENTRY WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,int  nCmdShow)
{
    MSG msg;    						//声明消息结构对象
  MyRegisterClass(hInstance);    			//注册窗口
    //初始化
    if(!InitInstance(hInstance,nCmdShow))  return FALSE;
    //消息循环
    while(GetMessage(&msg,NULL,0,0))    	//PostQuitMessage(0)结束消息循环
    {
		TranslateMessage(&msg);    		//检索消息
		DispatchMessage(&msg);    		//将消息间接传给函数指针
    }
    return msg.wParam;    				//结束消息循环传回PostQuitMessage
}
//函数MyRegisterClass()用来注册窗口类
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASS wc;    					//声明窗口结构对象
    //初始化对象wc的域值
    wc.style         =CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc  =(WNDPROC)WndProc;    //回调函数的函数指针
    wc.cbClsExtra    =0;
    wc.cbWndExtra  =0;
    wc.hInstance     =hInstance;
    wc.hIcon         =LoadIcon(NULL,IDI_APPLICATION);
    wc.hCursor       =LoadCursor(NULL,IDC_ARROW);
    wc.hbrBackground =(HBRUSH)GetStockObject(WHITE_BRUSH);
    wc.lpszMenuName  =NULL;
    wc.lpszClassName =szWindowClass;
	return RegisterClass(&wc);    //注册
}
//函数InitInstanee(HANDLE,int)创建主窗口
BOOL InitInstance(HINSTANCE hInstance,int nCmdShow)
{
    HWND hWnd;    				//声明窗口句柄
    //使用CreateWindow()函数创建窗口并返回句柄
    hWnd=CreateWindow(    			//填函数参数
		szWindowClass,    			//窗口类名
		szTitle,    					//标题条内容
		WS_OVERLAPPEDWINDOW | 	//显示方式
		WS_VSCROLL |     			//具有水平滚动条
		WS_HSCROLL,    			//具有垂直滚动条
		CW_USEDEFAULT,    		//X的起点坐标
		CW_USEDEFAULT,    		//Y的起点坐标
		CW_USEDEFAULT,    		//窗口宽度
		CW_USEDEFAULT,    		//窗口高度
		NULL,    					//父窗口句柄
		NULL,    					//窗口菜单句柄
		hInstance,    				//实例句柄
		NULL    					//附加数据
		);
    if(!hWnd)  return FALSE;    		//判断是否创建成功
    ShowWindow(hWnd,nCmdShow);    //创建成功则显示窗口
    UpdateWindow(hWnd);    			//送出WM_PAINT消息
    return TRUE;    					//返回创建成功标志
}
//函数WndProc(HWND,unsigned,WORD,LONG)处理主窗口发生的信息.
LRESULT CALLBACK WndProc(HWND  hWnd, UINT message,
    WPARAM  wParam, LPARAM  lParam)
{
    PAINTSTRUCT ps;
    HDC hdc;
   char szZRF[]="ZRF and SSH";
    switch(message)    //筛选消息
	{
		case WM_PAINT:    		//主窗口画图消息
			hdc=BeginPaint(hWnd,&ps);
			TextOut(hdc,120,100,szZRF,strlen(szZRF));
			EndPaint(hWnd,&ps);
			break;
		case WM_DESTROY:  	//窗口已经撤销,准备结束程序运行
			PostQuitMessage(0);	//发送WM-QUIT消息，结束消息循环
			break;
		default:    				//处理系统消息
			return DefWindowProc(hWnd,message,wParam,lParam);
    }
    return 0;
}
