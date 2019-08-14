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
int OperClient::enterChoice()						//����ѡ��˵�
{   cout << "\nEnter your choice" << endl<< "1 - store accounts to a formatted text file " << endl
        << "2 - update an account" << endl<< "3 - add a new account" << endl
        << "4 - delete an account" << endl<< "5 - end program\n ";
   int menuChoice;   cin >> menuChoice; 	//����ѡ��
   return menuChoice;
} 
void OperClient::printRecord( fstream &readFromFile )	//������ʽ�ı�
{	ofstream outPrintFile( "print.txt", ios::out );   	//�����ı��ļ�
//��������ļ�ʧ�ܣ��˳�����
	if ( !outPrintFile ) 	{cerr << "File could not be created." << endl;	exit( 1 );	} 
	outPrintFile << left << setw( 10 ) << "Account" << setw( 16 )
		<< "Name" << setw( 11 ) << setw( 10 ) << "Balance" << endl;
   readFromFile.seekg( 0 );					//�����ļ�λ��ָ�뵽��¼�ļ���ʼ����
   ClientData client;
   readFromFile.read( reinterpret_cast< char * >(&client),sizeof( ClientData ) );
   while ( !readFromFile.eof() )    			//�����м�¼�Ӽ�¼�ļ��п������ı��ļ�
   {  if ( client.getAccountNumber() != 0 )   
         outputLine( outPrintFile, client ); 	//д������¼
      //��������¼
      readFromFile.read( reinterpret_cast< char * >(&client), sizeof(ClientData)); 
   } 
} 
void OperClient::updateRecord( fstream &updateFile )			//�ڼ�¼�и������
{  int accountNumber = getAccount( "Enter account to update" );  	//��ȡ���µ��ʺ�
   updateFile.seekg(( accountNumber - 1 ) * sizeof( ClientData ) );//�ƶ�ָ�뵽��ȷ��λ��
   ClientData client;   									//��ȡ��¼
   updateFile.read( reinterpret_cast< char * >( &client ),sizeof( ClientData ) );
   if (client.getAccountNumber() != 0 )    					//���¼�¼
   {  outputLine( cout, client );
      cout << "\nEnter charge (+) or payment (-): ";      		//��ʾ�û�ָ��
      double transaction; cin >> transaction;					//charge �� payment
      double oldBalance = client.getBalance();      			//���¼�¼���
      client.setBalance( oldBalance + transaction );
      outputLine( cout, client );
      updateFile.seekp(( accountNumber - 1 ) * sizeof( ClientData ));//�ƶ�ָ�뵽��ȷλ��
   	  //���µļ�¼���Ǿɵļ�¼
      updateFile.write(reinterpret_cast< const char * >( &client),sizeof( ClientData ) ); 
   } 
   else   										//����������ʺ���ʾ������Ϣ
      cerr << "Account #" << accountNumber<< " has no information." << endl;
} 
void OperClient::newRecord( fstream &insertInFile )		//�����Ͳ����¼
{  int accountNumber = getAccount( "Enter new account number" );   //��ȡ�������ʺ�
   insertInFile.seekg(( accountNumber - 1 ) * sizeof( ClientData ) );
   ClientData client;
   insertInFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );
   if ( client.getAccountNumber() == 0 )    			//�����¼�����ڣ��򴴽���¼
   {  char Name[ 15 ];      double balance;
      cout << "Enter name, balance\n? ";   cin >> setw( 15 ) >> Name >> balance;
      client.setName( Name );      client.setBalance( balance );
      client.setAccountNumber( accountNumber );
      insertInFile.seekp( ( accountNumber - 1 ) *sizeof( ClientData ) );
      insertInFile.write( reinterpret_cast< const char * >( &client ), sizeof( ClientData ) );
   } 
   else   cerr << "Account #" << accountNumber<< " already contains information." << endl;
} 
void OperClient::deleteRecord( fstream &deleteFromFile ) //ɾ���Ѿ����ڵļ�¼
{  int accountNumber = getAccount( "Enter account to delete" );
   deleteFromFile.seekg(( accountNumber - 1 ) * sizeof( ClientData ) );
   ClientData client;
   deleteFromFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );
   if ( client.getAccountNumber() != 0 )    			//�����¼���ڣ���ɾ����¼
   {   ClientData blankClient;
      deleteFromFile.seekp( ( accountNumber - 1 ) * sizeof( ClientData ) );
      //�ÿհ׼�¼�滻�Ѿ����ڵļ�¼
      deleteFromFile.write(reinterpret_cast< const char * >( &blankClient ),
                           sizeof( ClientData ) );
      cout << "Account #" << accountNumber << " deleted.\n";
   }
   else  cerr << "Account #" << accountNumber << " is empty.\n";
} 
void OperClient::outputLine( ostream &output, const ClientData &record ) //��ʾ������¼
{   output << left << setw( 10 ) << record.getAccountNumber()
          << setw( 16 ) << record.getName().data()
          << setw( 10 ) << setprecision( 2 ) << right << fixed 
          << showpoint << record.getBalance() << endl;
}
int OperClient::getAccount( const char * const prompt )				//��ȡ�ʺ�
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
   cin >> accountNumber;   										//ָ���ʺ�
   client.setAccountNumber( accountNumber );
   //������Ϣ�������ļ���
   while ( client.getAccountNumber()> 0 &&client.getAccountNumber() <= 100) 
   {  cout << "Enter name, balance\n? ";   cin >> setw( 15 ) >> Name;   cin >> balance;
      client.setName( Name );      client.setBalance( balance );
      //���ļ��в��Ҽ�¼λ��
      outCredit.seekp((client.getAccountNumber()-1) * sizeof(ClientData));
      //����Ϣд���ļ�
      outCredit.write(reinterpret_cast< const char * >( &client),sizeof(ClientData));
      cout << "Enter account number\n? ";   cin >> accountNumber;    //ָ����һ���ʺ�
      client.setAccountNumber( accountNumber );
   }
} 
#endif
