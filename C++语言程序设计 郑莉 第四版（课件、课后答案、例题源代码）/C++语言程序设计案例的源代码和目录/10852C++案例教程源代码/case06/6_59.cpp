#include <iostream> 
using namespace std; 
char *get_substr(char *sub, char *str); 
int main() 
{	char *substr; 
	substr = get_substr("three", "one two three four"); 
	cout << "substring found: " << substr; 
	return 0; 
} 
char *get_substr(char *sub, char *str)		//返回指向子串的指针 
{	char *p, *p2, *start; 
	for(int t=0; str[t]; t++) 
	{	p = &str[t]; 						//重置指针  
		start = p;  p2 = sub;     
		while(*p2 && *p2==*p) { p++;  p2++;}	//查找子串位置 
		if(!*p2)  return start; 			//返回子串的头指针 
	} 
	return 0; 							//如果未找到，返回空指针
}
