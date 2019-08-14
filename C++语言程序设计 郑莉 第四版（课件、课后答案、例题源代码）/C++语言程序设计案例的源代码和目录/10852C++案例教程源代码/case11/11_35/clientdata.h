#ifndef CLIENTDATA_H
#define CLIENTDATA_H
#include <iostream>
using namespace std;
class ClientData 
{public:
	ClientData( int = 0, string = "", double = 0.0 );	//默认构造函数
	void setAccountNumber( int );   				//设置帐号accountNumber
	int getAccountNumber() const;				//获取帐号accountNumber
	void setName( string );   					//设置Name
	string getName() const;						//获取Name
	void setBalance( double );					//设置balance
	double getBalance() const;					//获取balance
private:
   int accountNumber;
   char Name[15];
   double balance;
}; 
ClientData::ClientData( int accountNumberValue, string NameValue,double balanceValue )
{  setAccountNumber( accountNumberValue );
   setName( NameValue );   setBalance( balanceValue );
} 
int ClientData::getAccountNumber() const {   return accountNumber;} 	//获取帐号
void ClientData::setAccountNumber( int accountNumberValue )			//设置帐号
{   accountNumber = accountNumberValue;} 
string ClientData::getName() const{   return Name;} 				//获取姓名
void ClientData::setName( string NameString )						//设置姓名
{	//从字符串中向Name中最多拷贝15个字符
	const char *NameValue = NameString.data();
	int length = strlen( NameValue );
	length = ( length < 15 ? length : 14 );
	strncpy( Name, NameValue, length );
	Name[ length ] = '\0';   						//向Name结尾追加null字符
} 
double ClientData::getBalance() const{   return balance;} //获取余额
void ClientData::setBalance( double balanceValue ) {   balance = balanceValue;}//设置余额
#endif
