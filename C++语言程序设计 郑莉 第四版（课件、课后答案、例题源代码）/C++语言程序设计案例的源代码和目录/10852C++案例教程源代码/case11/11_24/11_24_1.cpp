#include <iostream> 
#include <fstream> 
using namespace std; 
int main(int argc, char *argv[]) 
{	char ch; 
	if(argc!=2) 	{ cout << "Usage: commond <filename>\n"; 	return 1; } 
 	ifstream ifile(argv[1], ios::in | ios::binary); //�Զ����Ʒ�ʽ���ļ�
	if(!ifile) 	{cout << "Cannot open file.\n"; 		return 1; 	} 
 	while(ifile) {ifile.get(ch); if(ifile) cout << ch; 	} //��ȡ����ֱ���ļ���β
	ifile.close(); 
	return 0; 
}
