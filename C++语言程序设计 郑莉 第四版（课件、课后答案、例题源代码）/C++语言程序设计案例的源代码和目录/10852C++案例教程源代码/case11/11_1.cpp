#include < iostream >
#include < sstream>
#include < string>
using namespace std;
int main( )
{	string testStr("Input test 256 * 0.8"); //创建字符串对象 
	string s1,s2,s3;		double x,y;
	istringstream input(testStr);		//创建istringstream类对象，与字符串对象联系
	input>>s1>>s2>>x>>s3>>y;			//通过input从teststr中提取数据
	cout<<s1<<ends<<s2<<ends<<x<<s3<<y<<"="<<x*y<<endl;
	return 0;
}
