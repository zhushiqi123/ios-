#include <iostream> 
using namespace std; 
char *get_substr(char *sub, char *str); 
int main() 
{	char *substr; 
	substr = get_substr("three", "one two three four"); 
	cout << "substring found: " << substr; 
	return 0; 
} 
char *get_substr(char *sub, char *str)		//����ָ���Ӵ���ָ�� 
{	char *p, *p2, *start; 
	for(int t=0; str[t]; t++) 
	{	p = &str[t]; 						//����ָ��  
		start = p;  p2 = sub;     
		while(*p2 && *p2==*p) { p++;  p2++;}	//�����Ӵ�λ�� 
		if(!*p2)  return start; 			//�����Ӵ���ͷָ�� 
	} 
	return 0; 							//���δ�ҵ������ؿ�ָ��
}
