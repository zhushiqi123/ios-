#if !defined MINISTRING_H
#define MINISTRING_H
#include <iostream>
#include <iomanip>
using namespace std;
class MiniString 
{public:	
friend ostream &operator<< ( ostream &output, const MiniString &s ) //���������������
{	output << s.sPtr;		return output;	} 
friend istream &operator>>( istream &input, MiniString &s ) //��������ȡ�����
{	char temp[ 100 ];  // �����������ʱ����
	input >> setw( 100 ) >> temp;
	s = temp;        	// ʹ�ø�ֵ�����
	return input; 
} 
MiniString( const char * = "" );  	// ת������Ĭ�Ϲ��캯��
MiniString( const MiniString & ); 	// �������캯��
~MiniString();                    	// ��������
const MiniString &operator=( const MiniString & );  	// ���ظ�ֵ�����=
const MiniString &operator+=( const MiniString & ); 	// �������������+=
bool operator!() const;              // ���������!()�����ж��ַ����Ƿ�Ϊ��
bool operator==( const MiniString & ) const; // ���ع�ϵ����� == 
bool operator<( const MiniString & ) const;  // ���ع�ϵ�����< 
bool operator!=( const MiniString & right ) const
{ return !( *this == right ); }		//���ع�ϵ�����!=
bool operator>( const MiniString &right ) const 
{ return right < *this; } 			// ���������>
bool operator<=( const MiniString &right ) const 
{ return !( right < *this ); } 		// ���������<= 
bool operator>=( const MiniString &right ) const 
{ return !( *this < right ); } 		// ���������>=
char &operator[]( int );             	// �����±������
const char &operator[]( int ) const; 	// �����±������
MiniString operator()( int, int );   	// ���أ�������������Ӵ�
int getLength() const;               	// �����ַ�������
private:
int length;                      	// �ַ�������
char *sPtr;                      	// ָ���ַ�����ʼλ��
void setString( const char * );  	// ��������
}; 
#endif
