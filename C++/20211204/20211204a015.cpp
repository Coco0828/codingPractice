#include <iostream>
using namespace std;

int main(){
	int row, column;
	
	while(cin >> row >> column){
		int i, j;
		int square[row][column];
	
		for(i = 0; i < row; i ++){
			for(j = 0; j < column; j ++){
				cin >> square[i][j];
			}
		}
	
		for(i = 0; i < column; i ++){
			for(j = 0; j < row; j ++){
				cout << square[j][i] << " ";
			}
			cout << endl;
		}	
	}
	
	return 0;
} 
