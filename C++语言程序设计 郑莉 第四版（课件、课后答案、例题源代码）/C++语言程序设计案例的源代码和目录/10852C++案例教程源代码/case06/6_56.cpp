#include <iostream> 
#include <cctype> 
using namespace std; 
int main() 
{	int num[12]={0,0,0,0,0,0,0,0,0,0,0};
	char str[80] = "This Is A Test"; 
	cout << "Original string: " << str << "\n"; 
	for(int i = 0; str[i]; i++) 
	{	if(isalnum(str[i]))	num[0]++;
		if(isalpha(str[i]))	num[1]++;
		if(iscntrl(str[i]))	num[2]++;
		if(isdigit(str[i]))	num[3]++;
		if(isgraph(str[i]))	num[4]++;
		if(islower(str[i]))	num[5]++;
		if(isprint(str[i]))	num[6]++;
		if(ispunct(str[i]))	num[7]++;
		if(isspace(str[i]))	num[8]++;
		if(isupper(str[i]))	num[9]++;
		if(isxdigit(str[i]))	num[10]++;
	} 
	cout << "Number of Alphanumeric (A - Z, a - z, or 0 - 9) : " << num[0]<<endl; 
	cout << "Number of Alphabetic (A - Z or a - z): " << num[1]<<endl; 
	cout << "Number of Control character (0x00 - 0x1F or 0x7F): " << num[2]<<endl; 
	cout << "Number of Decimal digit (0 - 9): " << num[3]<<endl; 
	cout << "Number of Printable character except space ( ): " << num[4]<<endl; 
	cout << "Number of Lowercase letter (a - z): " << num[5]<<endl; 
	cout <<"Number of Printable character including space (0x20- 0x7E): "<< num[6]<<endl; 
	cout << "Number of Punctuation character: " << num[7]<<endl; 
	cout << "Number of White-space character (0x09 - 0x0D or 0x20): " << num[8]<<endl; 
	cout << "Number of Uppercase letter (A - Z): " << num[9]<<endl; 
	cout << "Number of Hexadecimal digit (A - F, a - f, or 0 - 9): " << num[10]<<endl; 
	return 0; 
}  
