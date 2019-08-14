#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<fstream>
using namespace std;
struct bookData{  	int TP;	char bookName[40] ;	long balance;};
class OperBook
{	bookData book;
public:
	void Append(fstream) ;
	void Sale(fstream) ;
	void Inquire(fstream) ;
	void CreateTxt(fstream) ;
};
#endif
