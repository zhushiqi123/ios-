#include < iostream >
#include < sstream>
#include < string>
using namespace std;
int main( )
{	string testStr("Input test 256 * 0.8"); //�����ַ������� 
	string s1,s2,s3;		double x,y;
	istringstream input(testStr);		//����istringstream��������ַ���������ϵ
	input>>s1>>s2>>x>>s3>>y;			//ͨ��input��teststr����ȡ����
	cout<<s1<<ends<<s2<<ends<<x<<s3<<y<<"="<<x*y<<endl;
	return 0;
}
