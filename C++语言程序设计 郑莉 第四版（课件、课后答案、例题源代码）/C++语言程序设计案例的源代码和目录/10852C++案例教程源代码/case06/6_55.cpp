#include <iostream> 
#include <cctype> 
using namespace std; 
int main() 
{	char str[80] = "This Is A Test"; 
	cout << "Original string: " << str << "\n"; 
	for(int i = 0; str[i]; i++) 
	{	if(isupper(str[i]))  str[i] = tolower(str[i]); //����д��ĸת��ΪСд
	else if(islower(str[i]))  str[i] = toupper(str[i]); //��Сд��ĸת��Ϊ��д
	} 
	cout << "Inverted-case string: " << str; 
	return 0; 
}
