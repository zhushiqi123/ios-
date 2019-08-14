#include <iostream>
#include <string>
using namespace std;
class Words
{   char *str;
  public:
	Words (char *s)   {str=new char[strlen (s) +1] ;  strcpy(str, s) ; }
     void disp()  	    {cout << str << endl;}
	char &operator[] (int i)  { return *(str+i);} 			//语句1：返回str[i]  
};
int main()
{	char  *s="china";
	Words word(s) ;       word.disp () ;
	int n=strlen(s) ;
	while (n>=0)   { word [n-1] =word [n-1 ] -32 ; n--; }//语句2：字母转化为大写
     word.disp () ;
	return 0;
}
