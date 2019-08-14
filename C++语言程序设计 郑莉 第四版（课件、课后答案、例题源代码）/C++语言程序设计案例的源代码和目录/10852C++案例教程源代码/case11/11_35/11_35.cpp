#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "OperClient.h"  
int main()
{	OperClient op;		char ch;
	cout<<"Create Credit Data File? (Y/N)"<<endl;	cin>>ch;
	if (ch=='Y'||ch=='y')		op.CreateFile();
	fstream ioCredit( "credit.dat", ios::in | ios::out );   //打开文件用于读写
	if ( !ioCredit )  
	{	cerr << "File could not be opened." << endl;  	exit ( 1 );	} 
	int choice;
    while ((choice = op.enterChoice()) != END )    
	{	switch (choice ) 
		{
		case PRINT:    op.printRecord( ioCredit );    break; //从记录文件中创建文本文件
        	case UPDATE:  op.updateRecord( ioCredit );    break; //更新记录
		case NEW:    op.newRecord( ioCredit );       break;  //创建记录
		case DELETE:    op.deleteRecord( ioCredit );  break;  //删除已经存在的记录
		default: cerr << "Incorrect choice" << endl; break; //如果选择错误输出所误信息
	  }
	  ioCredit.clear(); 
   }
   return 0;
} 
