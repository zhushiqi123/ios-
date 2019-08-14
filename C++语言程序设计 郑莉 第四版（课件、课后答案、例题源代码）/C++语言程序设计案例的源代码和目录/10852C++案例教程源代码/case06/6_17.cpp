#include <iostream>  
using namespace std;
int NumZeros(int Array[][4][3], int n1, int n2, int n3)	//统计三维数组中零数值个数
{	int count = 0;
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < n2; j++)
			for (int k = 0; k < n3; k++)
				if (Array[i][j][k] == 0) 	++count;
	return count;
}
int main()
{	int Array[2][4][3]= { { {5,0,2}, {0,0,9}, {4,1,0}, {7,0,7}},
					{ {3,0,0}, {8,0,0}, {0,0,0}, {2,0,9} }};
	cout << "This array has " << NumZeros(Array,2,4,3) << " zeros.\n";
	return 0;
}
