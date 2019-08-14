#include <iostream>
using namespace std;
int main()
{  int score;
    cout<<"Input the score=";    cin>>score;
    if (score<0 || score>100)
      cout<<"Out of score range!"<<endl; 
    else if (score>=90)
      cout<<"The grade is a A."<<endl; // else ifÇ¶Ì×Óï¾ä
    else if (score>=80)
      cout<<"The grade is a B."<<endl; // else ifÇ¶Ì×Óï¾ä
    else if (score>=70)
      cout<<"The grade is a C."<<endl; // else ifÇ¶Ì×Óï¾ä
    else if (score>=60)
      cout<<"The grade is a D."<<endl; // else ifÇ¶Ì×Óï¾ä
    else
      cout<<"The grade is a E."<<endl;
	return 0;
}
