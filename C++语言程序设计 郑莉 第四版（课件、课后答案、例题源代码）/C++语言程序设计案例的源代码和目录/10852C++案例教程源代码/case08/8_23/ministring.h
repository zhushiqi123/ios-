#if !defined MINISTRING_H
#define MINISTRING_H
#include <iostream>
#include <iomanip>
using namespace std;
class MiniString 
{public:	
friend ostream &operator<< ( ostream &output, const MiniString &s ) //重载流插入运算符
{	output << s.sPtr;		return output;	} 
friend istream &operator>>( istream &input, MiniString &s ) //重载流提取运算符
{	char temp[ 100 ];  // 用于输入的临时数组
	input >> setw( 100 ) >> temp;
	s = temp;        	// 使用赋值运算符
	return input; 
} 
MiniString( const char * = "" );  	// 转换功能默认构造函数
MiniString( const MiniString & ); 	// 拷贝构造函数
~MiniString();                    	// 析构函数
const MiniString &operator=( const MiniString & );  	// 重载赋值运算符=
const MiniString &operator+=( const MiniString & ); 	// 重载连接运算符+=
bool operator!() const;              // 重载运算符!()用于判断字符串是否为空
bool operator==( const MiniString & ) const; // 重载关系运算符 == 
bool operator<( const MiniString & ) const;  // 重载关系运算符< 
bool operator!=( const MiniString & right ) const
{ return !( *this == right ); }		//重载关系运算符!=
bool operator>( const MiniString &right ) const 
{ return right < *this; } 			// 重载运算符>
bool operator<=( const MiniString &right ) const 
{ return !( right < *this ); } 		// 重载运算符<= 
bool operator>=( const MiniString &right ) const 
{ return !( *this < right ); } 		// 重载运算符>=
char &operator[]( int );             	// 重载下标运算符
const char &operator[]( int ) const; 	// 重载下标运算符
MiniString operator()( int, int );   	// 重载（）运算符返回子串
int getLength() const;               	// 返回字符串长度
private:
int length;                      	// 字符串长度
char *sPtr;                      	// 指向字符串起始位置
void setString( const char * );  	// 辅助函数
}; 
#endif
