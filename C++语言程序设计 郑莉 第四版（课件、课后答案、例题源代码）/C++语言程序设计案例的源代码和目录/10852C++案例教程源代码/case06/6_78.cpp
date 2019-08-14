#include <iostream>
using namespace std;
class Chess
{	char ChessMat[3][3];  			//棋盘游戏矩阵
public:
	char CheckWin(void);			//判断是否出现了获胜者
	void InitChess(void);			//初始化矩阵
	void PlayerMove(void);			//获取下棋者的走的位置
	void ComputerMove(void);		//获取计算机走的位置
	void PrintChessMat(void);		//在屏幕上输出矩阵
};

void Chess::InitChess(void)			//初始化矩阵
{	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++) ChessMat[i][j] =  ' ';
}
void Chess::PlayerMove(void)		//获取下棋者的走的位置
{	int x, y;
	cout<<"Move your chessman to X Y coordinates : ";  cin>>x>>y;
	x--; y--;
	if(ChessMat[x][y]!= ' ')  { cout<<"Invalid move, try again.\n";    PlayerMove();}
	else ChessMat[x][y] = 'X';
}
void Chess::ComputerMove(void)		//获取计算机走的位置
{	int i,j;
	for(i=0; i<3; i++)
	{	for(j=0; j<3; j++)      if(ChessMat[i][j]==' ') break;
		if(ChessMat[i][j]==' ') break;
	}
	if(i*j==9)    {cout<<"draw\n";    exit(0);  }
	else    ChessMat[i][j] = 'O';
}
void Chess::PrintChessMat(void)		//在屏幕上输出矩阵
{	for(int t=0; t<3; t++) 
	{	cout<<ChessMat[t][0]<<"  | "<<ChessMat[t][1]<<" | "<<ChessMat[t][2];
		if(t!=2) cout<<"\n---|---|---\n";
	}
	cout<<"\n";
}
char Chess::CheckWin(void)			//判断是否出现了获胜者
{	for(int i=0; i<3; i++)  			//检查行
		if(ChessMat[i][0]==ChessMat[i][1] && ChessMat[i][0]==ChessMat[i][2]) 
			return ChessMat[i][0];
	for(i=0; i<3; i++)  				//检查列
		if(ChessMat[0][i]==ChessMat[1][i] && ChessMat[0][i]==ChessMat[2][i]) 
			return ChessMat[0][i];
	//检查对角线
	if(ChessMat[0][0]==ChessMat[1][1] && ChessMat[1][1]==ChessMat[2][2])
       return ChessMat[0][0];
	if(ChessMat[0][2]==ChessMat[1][1] && ChessMat[1][1]==ChessMat[2][0])
       return ChessMat[0][2];
	return ' ';
}

int main()
{	Chess chess;	char done =  ' ';
	cout<<"Game beginning.\n" <<"You will play against the computer.\n";
	chess.InitChess();
	do{ chess.PrintChessMat();    	chess.PlayerMove();    	done = chess.CheckWin(); 
		if(done!= ' ') break; 	    chess.ComputerMove();  	done = chess.CheckWin(); 
	} while(done== ' ');
	if(done=='X') cout<<"You won!\n";
	else cout<<"I won!\n";
	chess.PrintChessMat(); 			//显示最终位置 
	return 0;
}
