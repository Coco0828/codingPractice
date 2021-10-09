#include <iostream>
using namespace std;

void input(int* input1, int* input2, int* gameBoard, string currentPlayer);
void printBoard(int gameBoard);
int win(int gameBoard);
void restart();

int main(){
	int gameBoard[3][3] = {{0}, {0}, {0}};
	string currentPlayer = "O";
	int input1, input2;
	int k = 0;
	
	while(k = 0){
		cout << "user " << currentPlayer << "'s turn" << endl;
		cout << "plz input:" << endl;
		
		//輸入 
		input(&input1, &input2, &gameBoard, currentPlayer);
		
		//畫棋盤 
		printBoard(gameBoard); 
		
		//更換玩家 
		(currentPlayer == "O")?currentPlayer = "X":currentPlayer = "O";
		
		//判斷輸贏 
		if(win(gameBoard) == 1){
			cout << "Player O has won" << endl;
			k = 1;
		} else if(win(gameBoard) == 2){
			cout << "Player X has won" << endl;
			k = 1;
		}
		
		cout << "\n" << endl;
	}
	
	//遊戲結束 
	cout << "Game Over" << endl;
	
	// 重新開始 
	cout << "Restart:" << endl;
	restart();

	return 0;
}

void input(int *input1, int *input2, int *gameBoard, string currentPlayer){
	cin >> *input1;
	cin >> *input2;
	
	(currentPlayer == "O")?*gameBoard[*input1, *input2] = 1:*gameBoard[*input1, *input2] = 2;
}

void printBoard(int gameBoard){
	int i, j;
	cout << "-------" << endl;
	for(i = 0; i < 3; i ++){
		for(j = 0; j < 3; j ++){
			if(gameBoard[i][j] == 1){
				cout << "|O";
			} else if(gameBoard[i][j] == 2){
				cout << "|X";
			} else{
				cout << "| ";
			}
		}
		cout << "|" << endl;
		cout << "-------" << endl;
	}
}

int win(int gameBoard){
	int i;
	for(i = 0; i < 3; i ++){
		if(gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2]){
			return gameBoard[i][0];
		}
		if(gameBoard[0][i] == gameBoard[1][i] && gameBoard[1][i] == gameBoard[2][i]){
			return gameBoard[0][i];
		}
	}
	if(gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2]){
		return gameBoard[0][0];
	}
	if(gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0]){
		return gameBoard[0][2];
	}
	return 0;
}

void restart(){
	int gameBoard[3][3] = {{0}, {0}, {0}};
	string currentPlayer = "O";
	int input1, input2;
	int k = 0;
	
	while(k = 0){
		cout << "user " << currentPlayer << "'s turn" << endl;
		cout << "plz input:" << endl;
		
		//輸入 
		input(&input1, &input2, &gameBoard, currentPlayer);
		
		//畫棋盤 
		printBoard(gameBoard); 
		
		//更換玩家 
		(currentPlayer == "O")?currentPlayer = "X":currentPlayer = "O";
		
		//判斷輸贏 
		if(win(gameBoard) == 1){
			cout << "Player O has won" << endl;
			k = 1;
		} else if(win(gameBoard) == 2){
			cout << "Player X has won" << endl;
			k = 1;
		}
		
		cout << "\n" << endl;
	}
	
	//遊戲結束 
	cout << "Game Over" << endl;
	
	// 重新開始 
	cout << "Restart:" << endl;
	restart();
}
