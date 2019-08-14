//小型字符串类的实现
#include "MiniString.h" 
// 转换构造函数用于将char * 类型转换为字符串类型
MiniString::MiniString( const char *s ): length(( s != 0 ) ? strlen( s ) : 0 ){  setString( s ); } 
MiniString::MiniString(const MiniString &copy): length( copy.length ) //拷贝构造函数
{ setString( copy.sPtr );} 
MiniString::~MiniString(){   delete [] sPtr;} 
// 重载 = 操作符, 避免自我赋值
const MiniString &MiniString::operator=( const MiniString &right )
{ 	if ( &right != this )        		// 避免自我赋值
   	{  	delete [] sPtr;           		// 避免内存泄漏
      	length = right.length;    	// 新的字符串长度
      	setString( right.sPtr );    
   	}
   	else      cout << "Attempted assignment of a String to itself\n";
   	return *this;   
} 
// 将字符串连接到当前字符串右侧，并存储到当前字符串对象中
const MiniString &MiniString::operator+=( const MiniString &right )
{  size_t newLength = length + right.length;	// 新的长度
   char *tempPtr = new char[ newLength + 1 ];	// 申请内存
   strcpy( tempPtr, sPtr );					// 拷贝sPtr
   strcpy( tempPtr + length, right.sPtr );		// 拷贝right.sPtr
   delete [] sPtr;  sPtr = tempPtr;      		// 释放内存，将新数组赋给sPtr
   length = newLength;  					// 设置新的长度
   return *this;  
} 
// 判断当前MiniString是否为空?
bool MiniString::operator!() const { return length == 0; } 
// 判断字符串是否相等?
bool MiniString::operator==( const MiniString &right ) const
{  return strcmp( sPtr, right.sPtr ) == 0;} 
// 判断当前字符串是否下于另一个字符串?
bool MiniString::operator<( const MiniString &right ) const
{   return strcmp( sPtr, right.sPtr ) < 0;} 
// 返回字符串中字符的引用
char &MiniString::operator[]( int subscript )
{  if( subscript < 0 || subscript >= length )// 判断下标是否越界 
   { cout << "Error: Subscript " << subscript<< " out of range" << endl;    exit( 1 ); }
   return sPtr[ subscript ];  
} 
// 返回字符串中字符的引用
const char &MiniString::operator[]( int subscript ) const
{ 	if( subscript < 0 || subscript >= length ) // 判断下标是否越界
   	{  cout << "Error: Subscript " << subscript<< " out of range" << endl;   exit( 1 ); }
   	return sPtr[ subscript ]; 
}
// 根据index和长度返回一个子串
MiniString MiniString::operator()( int index, int subLength )
{  // 如果index 越界或者子串长度< 0, 则返回空
   if ( index < 0 || index >= length || subLength < 0 )  
      return "";  // 自动转换为字符串类型
   int len; // 决定子串长度
   if ( ( subLength == 0 ) || ( index + subLength > length ) )      len = length - index;
   else      len = subLength;
   char *tempPtr = new char[ len + 1 ];   // 为子串分配临时内存空间
   strncpy( tempPtr, &sPtr[ index ], len );   // 拷贝子串到字符数组
   tempPtr[ len ] = '\0';
   MiniString tempString( tempPtr );   // 创建包含子串的临时字符串对象
   delete [] tempPtr;  // 释放临时数组
   return tempString;  // 返回临时字符串的拷贝
} 
int MiniString::getLength() const {   return length; }  // 返回字符串长度
void MiniString::setString( const char *string2 ) //由构造函数和重载运算符=时使用
{  sPtr = new char[ length + 1 ]; 				// 分配内存
   if ( string2 != 0 )   strcpy( sPtr, string2 ); 	// 如果string2 不是空指针，则拷贝内容
   else      sPtr[ 0 ] = '\0';  				// 如果string2 是空指针，则为空字符串
}
