#include <iostream>
#include <fstream>
using namespace std;
class CFileLink
{	fstream file1,file2,file3;	//����3��������
	char fn1[20],fn2[20],fn3[20];
public:
	CFileLink();				//�����ӵ������ļ����������Ӻ�Ľ���ļ�
	~CFileLink();				//�ر��ļ�
	void linkfile();			//��ȡ����Դ�ļ�,д�����ļ� 
	void prtfile();			//�������ļ�
};
CFileLink::CFileLink()
{	cout<<"Please input the linked file names and the resulted file name"<<endl;
	cout<<"Linked file1:";	cin>>fn1;
	cout<<"Linked file2:";	cin>>fn2;
	cout<<"Result file:";	cin>>fn3;
	file1.open(fn1,ios::in);
	if(!file1)	{	cout<<"cannot open file"<<fn1<<endl;		return;	}
	file2.open(fn2,ios::in);
	if(!file2)	{	cout<<"cannot open file"<<fn2<<endl;		return;	}
	file3.open(fn3,ios::in|ios::out);
	if(!file3)	{	cout<<"cannot open file"<<fn3<<endl;		return;	}
}
CFileLink::~CFileLink(){	file1.close();	file2.close();	file3.close();}
void CFileLink::linkfile()
{	char ch;
	file1.get(ch);	
     while(!file1.eof())	{	file3.put(ch);		file1.get(ch);	}
	file2.get(ch);	
     while(!file2.eof())	{	file3.put(ch);		file2.get(ch);	}
}
void CFileLink::prtfile()
{	char ch;
	file3.seekp(0);	file3.get(ch);	
     while(!file3.eof())	{	cout<<ch;	file3.get(ch);	}
	cout<<endl;
}
void main()
{	CFileLink flink;	flink.linkfile();
	cout<<"The content of the result file is:"<<endl;
	flink.prtfile();
} 
