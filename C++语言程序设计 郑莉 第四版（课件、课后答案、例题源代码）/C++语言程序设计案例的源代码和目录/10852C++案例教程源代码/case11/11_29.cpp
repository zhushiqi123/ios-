#include <iostream>
#include <fstream>
using namespace std;
class CFileCopy
{	fstream file1,file2;	//声明3个流对象
	char fn1[20],fn2[20];
public:
	CFileCopy();			//打开连接的两个文件，创建连接后的结果文件
	~CFileCopy();			//关闭文件
	void copyfile();		//读取两个源文件,写入结果文件 
	void prtfile();		//输出结果文件
};
CFileCopy::CFileCopy()
{	cout<<"Please input the linked file names and the resulted file name"<<endl;
	cout<<"Linked file1:";	cin>>fn1;
	cout<<"Linked file2:";	cin>>fn2;
	file1.open(fn1,ios::in);
	if(file1.fail())	{ cout<<"cannot open file"<<fn1<<endl; return; }
	file2.open(fn2,ios::in|ios::out);
	if(file2.fail())	{ cout<<"cannot open file"<<fn2<<endl; return; }
}
CFileCopy::~CFileCopy(){ file1.close(); file2.close(); }
void CFileCopy::copyfile()
{	char ch;
	file1.get(ch);	
     while(!file1.eof())	
     { file2.put(ch); file1.get(ch); }
}
void CFileCopy::prtfile()
{	char ch;
	file2.seekp(0);	file2.get(ch);	
     while(!file2.eof()) { cout<<ch; file2.get(ch);	}
	cout<<endl;
}
void main()
{	CFileCopy flink;	flink.copyfile();
	cout<<"The content of the result file is:"<<endl;
	flink.prtfile();
}
