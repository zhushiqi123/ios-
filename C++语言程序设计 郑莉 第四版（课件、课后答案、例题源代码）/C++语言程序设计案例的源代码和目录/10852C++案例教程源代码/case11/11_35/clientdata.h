#ifndef CLIENTDATA_H
#define CLIENTDATA_H
#include <iostream>
using namespace std;
class ClientData 
{public:
	ClientData( int = 0, string = "", double = 0.0 );	//Ĭ�Ϲ��캯��
	void setAccountNumber( int );   				//�����ʺ�accountNumber
	int getAccountNumber() const;				//��ȡ�ʺ�accountNumber
	void setName( string );   					//����Name
	string getName() const;						//��ȡName
	void setBalance( double );					//����balance
	double getBalance() const;					//��ȡbalance
private:
   int accountNumber;
   char Name[15];
   double balance;
}; 
ClientData::ClientData( int accountNumberValue, string NameValue,double balanceValue )
{  setAccountNumber( accountNumberValue );
   setName( NameValue );   setBalance( balanceValue );
} 
int ClientData::getAccountNumber() const {   return accountNumber;} 	//��ȡ�ʺ�
void ClientData::setAccountNumber( int accountNumberValue )			//�����ʺ�
{   accountNumber = accountNumberValue;} 
string ClientData::getName() const{   return Name;} 				//��ȡ����
void ClientData::setName( string NameString )						//��������
{	//���ַ�������Name����࿽��15���ַ�
	const char *NameValue = NameString.data();
	int length = strlen( NameValue );
	length = ( length < 15 ? length : 14 );
	strncpy( Name, NameValue, length );
	Name[ length ] = '\0';   						//��Name��β׷��null�ַ�
} 
double ClientData::getBalance() const{   return balance;} //��ȡ���
void ClientData::setBalance( double balanceValue ) {   balance = balanceValue;}//�������
#endif
