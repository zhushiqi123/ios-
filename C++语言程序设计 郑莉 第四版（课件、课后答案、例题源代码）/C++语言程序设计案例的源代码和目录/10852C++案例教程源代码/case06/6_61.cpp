#include <iostream> 
#include <cstring> 
using namespace std; 
int main() 
{	char *dictionary[][2] = 					//用指针数组定义小字典
	{	"pencil", "A writing instrument.",     "keyboard", "An input device.", 
		"rifle", "A sholder-fired firearm.",     "airplane", "A fixed-wing aircraft.", 
		"network", "An interconnected group of computers.",     "", "" 
	}; 
	char word[80]; 
	cout << "Enter word: ";   cin >> word; 
	for(int i = 0; *dictionary[i][0]; i++) 
	  if(!strcmp(dictionary[i][0], word)) 	
         { cout << dictionary[i][1] << "\n"; break;  }  
	if(!*dictionary[i][0]) cout << word << " not found.\n"; 
	return 0; 
}
