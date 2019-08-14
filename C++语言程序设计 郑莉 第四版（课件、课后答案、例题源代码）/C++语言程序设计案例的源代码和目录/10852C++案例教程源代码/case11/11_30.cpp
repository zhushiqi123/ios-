#include <iostream>
#include <fstream>
using namespace std;
class CFileCat
{	fstream file1,file2;		//声明2个流对象
	char fn1[20],fn2[20];
public:
	CFileCat();				//打开对接的两个文件，创建连接后的结果文件
	~CFileCat();				//关闭文件
	void catfile();			//读取两个源文件,写入结果文件 
	void prtfile();			//输出结果文件
};
CFileCat::CFileCat()
{	cout<<"Please input the linked file names and the resulted file name"<<endl;
	cout<<"Linked file1:";	cin>>fn1;
	cout<<"Linked file2:";	cin>>fn2;
	file1.open(fn1,ios::in|ios::out);
	if(file1.fail())	{ cout<<"cannot open file"<<fn1<<endl; return; }
	file2.open(fn2,ios::in);
	if(file2.fail())	{ cout<<"cannot open file"<<fn2<<endl; return; }
}
CFileCat::~CFileCat(){	file1.close(); file2.close();}
void CFileCat::catfile()
{	char ch;	file1.seekg(0,ios::end);
	file2.get(ch);	
     while(!file2.eof())	
     { file1.put(ch); file2.get(ch); }
}
void CFileCat::prtfile()
{	char ch;	file1.seekp(0);
	file1.get(ch);	
     while(!file1.eof())	
     { cout<<ch; file1.get(ch); }
	cout<<endl;
}
void main()
{	CFileCat fcat; fcat.catfile();
	cout<<"The content of the result file is:"<<endl;
	fcat.prtfile();
}
