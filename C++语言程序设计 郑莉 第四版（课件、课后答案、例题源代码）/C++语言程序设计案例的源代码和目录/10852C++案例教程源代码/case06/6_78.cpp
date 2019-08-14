#include <iostream>
using namespace std;
class Chess
{	char ChessMat[3][3];  			//������Ϸ����
public:
	char CheckWin(void);			//�ж��Ƿ�����˻�ʤ��
	void InitChess(void);			//��ʼ������
	void PlayerMove(void);			//��ȡ�����ߵ��ߵ�λ��
	void ComputerMove(void);		//��ȡ������ߵ�λ��
	void PrintChessMat(void);		//����Ļ���������
};

void Chess::InitChess(void)			//��ʼ������
{	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++) ChessMat[i][j] =  ' ';
}
void Chess::PlayerMove(void)		//��ȡ�����ߵ��ߵ�λ��
{	int x, y;
	cout<<"Move your chessman to X Y coordinates : ";  cin>>x>>y;
	x--; y--;
	if(ChessMat[x][y]!= ' ')  { cout<<"Invalid move, try again.\n";    PlayerMove();}
	else ChessMat[x][y] = 'X';
}
void Chess::ComputerMove(void)		//��ȡ������ߵ�λ��
{	int i,j;
	for(i=0; i<3; i++)
	{	for(j=0; j<3; j++)      if(ChessMat[i][j]==' ') break;
		if(ChessMat[i][j]==' ') break;
	}
	if(i*j==9)    {cout<<"draw\n";    exit(0);  }
	else    ChessMat[i][j] = 'O';
}
void Chess::PrintChessMat(void)		//����Ļ���������
{	for(int t=0; t<3; t++) 
	{	cout<<ChessMat[t][0]<<"  | "<<ChessMat[t][1]<<" | "<<ChessMat[t][2];
		if(t!=2) cout<<"\n---|---|---\n";
	}
	cout<<"\n";
}
char Chess::CheckWin(void)			//�ж��Ƿ�����˻�ʤ��
{	for(int i=0; i<3; i++)  			//�����
		if(ChessMat[i][0]==ChessMat[i][1] && ChessMat[i][0]==ChessMat[i][2]) 
			return ChessMat[i][0];
	for(i=0; i<3; i++)  				//�����
		if(ChessMat[0][i]==ChessMat[1][i] && ChessMat[0][i]==ChessMat[2][i]) 
			return ChessMat[0][i];
	//���Խ���
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
	chess.PrintChessMat(); 			//��ʾ����λ�� 
	return 0;
}
