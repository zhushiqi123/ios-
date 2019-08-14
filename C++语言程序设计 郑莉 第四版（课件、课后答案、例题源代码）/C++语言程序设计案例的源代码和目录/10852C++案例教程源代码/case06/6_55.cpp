#include <iostream> 
#include <cctype> 
using namespace std; 
int main() 
{	char str[80] = "This Is A Test"; 
	cout << "Original string: " << str << "\n"; 
	for(int i = 0; str[i]; i++) 
	{	if(isupper(str[i]))  str[i] = tolower(str[i]); //将大写字母转换为小写
	else if(islower(str[i]))  str[i] = toupper(str[i]); //将小写字母转换为大写
	} 
	cout << "Inverted-case string: " << str; 
	return 0; 
}
