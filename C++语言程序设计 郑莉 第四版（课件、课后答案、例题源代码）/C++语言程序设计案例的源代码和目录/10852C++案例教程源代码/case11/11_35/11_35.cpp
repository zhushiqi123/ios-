#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "OperClient.h"  
int main()
{	OperClient op;		char ch;
	cout<<"Create Credit Data File? (Y/N)"<<endl;	cin>>ch;
	if (ch=='Y'||ch=='y')		op.CreateFile();
	fstream ioCredit( "credit.dat", ios::in | ios::out );   //���ļ����ڶ�д
	if ( !ioCredit )  
	{	cerr << "File could not be opened." << endl;  	exit ( 1 );	} 
	int choice;
    while ((choice = op.enterChoice()) != END )    
	{	switch (choice ) 
		{
		case PRINT:    op.printRecord( ioCredit );    break; //�Ӽ�¼�ļ��д����ı��ļ�
        	case UPDATE:  op.updateRecord( ioCredit );    break; //���¼�¼
		case NEW:    op.newRecord( ioCredit );       break;  //������¼
		case DELETE:    op.deleteRecord( ioCredit );  break;  //ɾ���Ѿ����ڵļ�¼
		default: cerr << "Incorrect choice" << endl; break; //���ѡ��������������Ϣ
	  }
	  ioCredit.clear(); 
   }
   return 0;
} 
