#include <iostream>
using namespace std;
int main()
{	int score;
	cout<<"Input the score=";		cin>>score;
	switch (score/10)						// switch—°‘Ò”Ôæ‰
	{	case 10:
		case  9: 	cout << "The grade is A.\n";  	break;
		case  8: 	cout << "The grade is B.\n";  	break;
		case  7: 	cout << "The grade is C.\n";   	break;
		case  6: 	cout << "The grade is D.\n";   	break;
		case  5: 
		case  4: 
		case  3: 
		case  2: 
		case  1: 
		case  0: 	cout << "The grade is E.\n";  	break;
		default: 	cout << "Error: that score is out of range." << endl;
	}
	cout << "Goodbye." << endl;
	return 0;
}