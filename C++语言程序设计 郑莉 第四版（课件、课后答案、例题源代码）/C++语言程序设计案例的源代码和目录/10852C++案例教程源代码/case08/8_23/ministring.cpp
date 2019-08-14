//С���ַ������ʵ��
#include "MiniString.h" 
// ת�����캯�����ڽ�char * ����ת��Ϊ�ַ�������
MiniString::MiniString( const char *s ): length(( s != 0 ) ? strlen( s ) : 0 ){  setString( s ); } 
MiniString::MiniString(const MiniString &copy): length( copy.length ) //�������캯��
{ setString( copy.sPtr );} 
MiniString::~MiniString(){   delete [] sPtr;} 
// ���� = ������, �������Ҹ�ֵ
const MiniString &MiniString::operator=( const MiniString &right )
{ 	if ( &right != this )        		// �������Ҹ�ֵ
   	{  	delete [] sPtr;           		// �����ڴ�й©
      	length = right.length;    	// �µ��ַ�������
      	setString( right.sPtr );    
   	}
   	else      cout << "Attempted assignment of a String to itself\n";
   	return *this;   
} 
// ���ַ������ӵ���ǰ�ַ����Ҳ࣬���洢����ǰ�ַ���������
const MiniString &MiniString::operator+=( const MiniString &right )
{  size_t newLength = length + right.length;	// �µĳ���
   char *tempPtr = new char[ newLength + 1 ];	// �����ڴ�
   strcpy( tempPtr, sPtr );					// ����sPtr
   strcpy( tempPtr + length, right.sPtr );		// ����right.sPtr
   delete [] sPtr;  sPtr = tempPtr;      		// �ͷ��ڴ棬�������鸳��sPtr
   length = newLength;  					// �����µĳ���
   return *this;  
} 
// �жϵ�ǰMiniString�Ƿ�Ϊ��?
bool MiniString::operator!() const { return length == 0; } 
// �ж��ַ����Ƿ����?
bool MiniString::operator==( const MiniString &right ) const
{  return strcmp( sPtr, right.sPtr ) == 0;} 
// �жϵ�ǰ�ַ����Ƿ�������һ���ַ���?
bool MiniString::operator<( const MiniString &right ) const
{   return strcmp( sPtr, right.sPtr ) < 0;} 
// �����ַ������ַ�������
char &MiniString::operator[]( int subscript )
{  if( subscript < 0 || subscript >= length )// �ж��±��Ƿ�Խ�� 
   { cout << "Error: Subscript " << subscript<< " out of range" << endl;    exit( 1 ); }
   return sPtr[ subscript ];  
} 
// �����ַ������ַ�������
const char &MiniString::operator[]( int subscript ) const
{ 	if( subscript < 0 || subscript >= length ) // �ж��±��Ƿ�Խ��
   	{  cout << "Error: Subscript " << subscript<< " out of range" << endl;   exit( 1 ); }
   	return sPtr[ subscript ]; 
}
// ����index�ͳ��ȷ���һ���Ӵ�
MiniString MiniString::operator()( int index, int subLength )
{  // ���index Խ������Ӵ�����< 0, �򷵻ؿ�
   if ( index < 0 || index >= length || subLength < 0 )  
      return "";  // �Զ�ת��Ϊ�ַ�������
   int len; // �����Ӵ�����
   if ( ( subLength == 0 ) || ( index + subLength > length ) )      len = length - index;
   else      len = subLength;
   char *tempPtr = new char[ len + 1 ];   // Ϊ�Ӵ�������ʱ�ڴ�ռ�
   strncpy( tempPtr, &sPtr[ index ], len );   // �����Ӵ����ַ�����
   tempPtr[ len ] = '\0';
   MiniString tempString( tempPtr );   // ���������Ӵ�����ʱ�ַ�������
   delete [] tempPtr;  // �ͷ���ʱ����
   return tempString;  // ������ʱ�ַ����Ŀ���
} 
int MiniString::getLength() const {   return length; }  // �����ַ�������
void MiniString::setString( const char *string2 ) //�ɹ��캯�������������=ʱʹ��
{  sPtr = new char[ length + 1 ]; 				// �����ڴ�
   if ( string2 != 0 )   strcpy( sPtr, string2 ); 	// ���string2 ���ǿ�ָ�룬�򿽱�����
   else      sPtr[ 0 ] = '\0';  				// ���string2 �ǿ�ָ�룬��Ϊ���ַ���
}
