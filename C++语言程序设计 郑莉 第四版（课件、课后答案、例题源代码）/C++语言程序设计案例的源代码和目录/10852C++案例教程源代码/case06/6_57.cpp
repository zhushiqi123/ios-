#include <iostream> 
using namespace std; 
int strcopy(const char str1[], char str2[]); 
int main() 
{  	char s1[80],s2[80]; 
  	cout<<"Please input a string:";  cin.getline(s1,80,'\n');
  	strcopy(s1,s2); 						//½«×Ö·û´®s1¿½±´µ½×Ö·û´®s2
  	cout << "The String s2 is:"<<s2; 		// Êä³ö¸Ä±äºóµÄ×Ö·û´®
  	return 0; 
} 
int strcopy(const char str1[], char str2[])  	//×Ö·û´®¿½±´º¯Êý
{	if(!str1[0]) return 0;					//·µ»ØÊ§°Ü±êÖ¾0
	int i=0;
	do{	str2[i]=str1[i++];	}while (str1[i]);
	str2[i]='\0';
	return 1;
}
