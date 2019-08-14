#include "book.h"
void main( )
{	OperBook ob;		int choice;
	fstream iofile("booksFile.bin",ios::binary|ios::in|ios::out );
	if (! iofile)	{  cerr << "Cannot open File!" << endl;       return;	}
   	while ( 1 )
   	{	cout<<"************BookStore Management system***********\n"
         << "1 :append \t2 :sale \t3 : inquire \t4 :createtxt \t0 :exit >> ";
	   	cin >> choice;
	   	switch ( choice )
	   	{ case 1 : ob.Append(iofile); break;
	   	  case 2 : ob.Sale(iofile); break;
	   	  case 3 : ob.Inquire(iofile); break;
	   	  case 4 : ob.CreateTxt(iofile); break;
	   	  case 0 : cout << " Exit system \n" ; return;
	   	  default : cout << "Input error occur!\n";
	   	}
   }
   iofile.close() ; 
}
