#include <iostream>
#include <fstream>
using namespace std;
#include <process.h>
class CFileComp
{	fstream file1,file2;		//����2��������
	char fn1[20],fn2[20];
public:
	CFileComp();				//�򿪶Խӵ������ļ����������Ӻ�Ľ���ļ�
	~CFileComp();				//�ر��ļ�
	void compfile();			//��ȡ����Դ�ļ�,д�����ļ� 
	void prtfile();			//�������ļ�
};
CFileComp::CFileComp()
{	cout<<"Please input the linked file names and the resulted file name"<<endl;
	cout<<"Linked file1:";	cin>>fn1;
	cout<<"Linked file2:";	cin>>fn2;
	file1.open(fn1,ios::in);
	if(file1.fail())	{ cout<<"cannot open file"<<fn1<<endl; return; }
	file2.open(fn2,ios::in|ios::out);
	if(file2.fail())	{ cout<<"cannot open file"<<fn2<<endl; return; }
}
CFileComp::~CFileComp(){ file1.close(); file2.close();}
void CFileComp::compfile()
{	const int bsz=100;
	char buf1[bsz],buf2[bsz];
	int line=0,col;
	while(file1.getline(buf1,bsz)&&file2.getline(buf2,bsz))
	{	line++;		col=0;
		while(buf1[col]==buf2[col])	
         { if(buf1[col]=='\0')break; col++; }
		if(buf1[col]!=buf2[col])
		{ cout<<"The different beginning locate at: line"<<line<<",col"<<col+1<<endl;
		  break;
		}
	}
}
void CFileComp::prtfile()
{	char ch;	file1.seekp(0);
	file1.get(ch);	
     while(!file1.eof())	
     { cout<<ch; file1.get(ch); }
	cout<<endl;
}
void main()
{	CFileComp fcomp; fcomp.compfile();}
