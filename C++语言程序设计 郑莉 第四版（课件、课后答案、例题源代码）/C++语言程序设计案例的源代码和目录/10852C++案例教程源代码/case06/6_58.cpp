#include <iostream> 
#include <cstring> 
#include <cctype>  
using namespace std; 
void strInvertCase(char *str); 
int main() 
{	char str[80]; 
	cout<<"Please input a string:";  cin.getline(str,80,'\n');
	strInvertCase(str);   cout << str; 	//输出改变后的字符串
	return 0; 
} 
void strInvertCase(char *str) 			//转换字符串中字母的大小写
{	while(*str) 						//转换大小写
	{	if(isupper(*str)) *str = tolower(*str);      
		else if(islower(*str)) *str = toupper(*str); 
		str++; 						//移到下一个字符 
	} 
}
