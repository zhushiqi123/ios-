#include <iostream> 
#include <cstring> 
#include <cctype>  
using namespace std; 
void strInvertCase(char *str); 
int main() 
{	char str[80]; 
	cout<<"Please input a string:";  cin.getline(str,80,'\n');
	strInvertCase(str);   cout << str; 	//����ı����ַ���
	return 0; 
} 
void strInvertCase(char *str) 			//ת���ַ�������ĸ�Ĵ�Сд
{	while(*str) 						//ת����Сд
	{	if(isupper(*str)) *str = tolower(*str);      
		else if(islower(*str)) *str = toupper(*str); 
		str++; 						//�Ƶ���һ���ַ� 
	} 
}
