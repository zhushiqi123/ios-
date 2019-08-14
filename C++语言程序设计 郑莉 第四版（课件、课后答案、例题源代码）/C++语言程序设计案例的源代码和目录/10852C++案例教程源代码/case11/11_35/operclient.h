#ifndef OPERCLIENT_H
#define OPERCLIENT_H
#include <iostream>
#include <fstream>
using namespace std;
#include "clientData.h"  
enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END };
class OperClient
{public:
	void CreateFile();
	int enterChoice();
	void printRecord( fstream& );
	void updateRecord( fstream& );
	void newRecord( fstream& );
	void deleteRecord( fstream& );
	void outputLine( ostream&, const ClientData & );
	int getAccount( const char * const );
};
int OperClient::enterChoice()						//进入选择菜单
{   cout << "\nEnter your choice" << endl<< "1 - store accounts to a formatted text file " << endl
        << "2 - update an account" << endl<< "3 - add a new account" << endl
        << "4 - delete an account" << endl<< "5 - end program\n ";
   int menuChoice;   cin >> menuChoice; 	//输入选项
   return menuChoice;
} 
void OperClient::printRecord( fstream &readFromFile )	//创建格式文本
{	ofstream outPrintFile( "print.txt", ios::out );   	//创建文本文件
//如果创建文件失败，退出程序
	if ( !outPrintFile ) 	{cerr << "File could not be created." << endl;	exit( 1 );	} 
	outPrintFile << left << setw( 10 ) << "Account" << setw( 16 )
		<< "Name" << setw( 11 ) << setw( 10 ) << "Balance" << endl;
   readFromFile.seekg( 0 );					//设置文件位置指针到记录文件开始部分
   ClientData client;
   readFromFile.read( reinterpret_cast< char * >(&client),sizeof( ClientData ) );
   while ( !readFromFile.eof() )    			//将所有记录从记录文件中拷贝到文本文件
   {  if ( client.getAccountNumber() != 0 )   
         outputLine( outPrintFile, client ); 	//写单个记录
      //继续读记录
      readFromFile.read( reinterpret_cast< char * >(&client), sizeof(ClientData)); 
   } 
} 
void OperClient::updateRecord( fstream &updateFile )			//在记录中更新余额
{  int accountNumber = getAccount( "Enter account to update" );  	//获取更新的帐号
   updateFile.seekg(( accountNumber - 1 ) * sizeof( ClientData ) );//移动指针到正确的位置
   ClientData client;   									//读取记录
   updateFile.read( reinterpret_cast< char * >( &client ),sizeof( ClientData ) );
   if (client.getAccountNumber() != 0 )    					//更新记录
   {  outputLine( cout, client );
      cout << "\nEnter charge (+) or payment (-): ";      		//提示用户指定
      double transaction; cin >> transaction;					//charge 或 payment
      double oldBalance = client.getBalance();      			//更新记录余额
      client.setBalance( oldBalance + transaction );
      outputLine( cout, client );
      updateFile.seekp(( accountNumber - 1 ) * sizeof( ClientData ));//移动指针到正确位置
   	  //用新的记录覆盖旧的记录
      updateFile.write(reinterpret_cast< const char * >( &client),sizeof( ClientData ) ); 
   } 
   else   										//如果不存在帐号显示错误信息
      cerr << "Account #" << accountNumber<< " has no information." << endl;
} 
void OperClient::newRecord( fstream &insertInFile )		//创建和插入记录
{  int accountNumber = getAccount( "Enter new account number" );   //获取创建的帐号
   insertInFile.seekg(( accountNumber - 1 ) * sizeof( ClientData ) );
   ClientData client;
   insertInFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );
   if ( client.getAccountNumber() == 0 )    			//如果记录不存在，则创建记录
   {  char Name[ 15 ];      double balance;
      cout << "Enter name, balance\n? ";   cin >> setw( 15 ) >> Name >> balance;
      client.setName( Name );      client.setBalance( balance );
      client.setAccountNumber( accountNumber );
      insertInFile.seekp( ( accountNumber - 1 ) *sizeof( ClientData ) );
      insertInFile.write( reinterpret_cast< const char * >( &client ), sizeof( ClientData ) );
   } 
   else   cerr << "Account #" << accountNumber<< " already contains information." << endl;
} 
void OperClient::deleteRecord( fstream &deleteFromFile ) //删除已经存在的记录
{  int accountNumber = getAccount( "Enter account to delete" );
   deleteFromFile.seekg(( accountNumber - 1 ) * sizeof( ClientData ) );
   ClientData client;
   deleteFromFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );
   if ( client.getAccountNumber() != 0 )    			//如果记录存在，则删除记录
   {   ClientData blankClient;
      deleteFromFile.seekp( ( accountNumber - 1 ) * sizeof( ClientData ) );
      //用空白记录替换已经存在的记录
      deleteFromFile.write(reinterpret_cast< const char * >( &blankClient ),
                           sizeof( ClientData ) );
      cout << "Account #" << accountNumber << " deleted.\n";
   }
   else  cerr << "Account #" << accountNumber << " is empty.\n";
} 
void OperClient::outputLine( ostream &output, const ClientData &record ) //显示单个记录
{   output << left << setw( 10 ) << record.getAccountNumber()
          << setw( 16 ) << record.getName().data()
          << setw( 10 ) << setprecision( 2 ) << right << fixed 
          << showpoint << record.getBalance() << endl;
}
int OperClient::getAccount( const char * const prompt )				//获取帐号
{  int accountNumber;
   do {  cout << prompt << " (1 - 100): "; cin >> accountNumber;
   } while ( accountNumber < 1 || accountNumber > 100 );
   return accountNumber;
} 
void OperClient::CreateFile()
{  int accountNumber;
   char Name[ 15 ];   double balance;
   ofstream outCredit( "credit.dat", ios::binary );
   if ( !outCredit ) {  cerr << "File could not be opened." << endl; exit( 1 );   } 
   cout << "Enter account number (1 to 100, 0 to end input):\n ";
   ClientData client;
   cin >> accountNumber;   										//指定帐号
   client.setAccountNumber( accountNumber );
   //输入信息拷贝到文件中
   while ( client.getAccountNumber()> 0 &&client.getAccountNumber() <= 100) 
   {  cout << "Enter name, balance\n? ";   cin >> setw( 15 ) >> Name;   cin >> balance;
      client.setName( Name );      client.setBalance( balance );
      //在文件中查找记录位置
      outCredit.seekp((client.getAccountNumber()-1) * sizeof(ClientData));
      //将信息写入文件
      outCredit.write(reinterpret_cast< const char * >( &client),sizeof(ClientData));
      cout << "Enter account number\n? ";   cin >> accountNumber;    //指定另一个帐号
      client.setAccountNumber( accountNumber );
   }
} 
#endif
