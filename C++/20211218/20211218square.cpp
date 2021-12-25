#include <iostream>
using namespace std;

int main(){
	int square[3][3];
	scanf("[%d,%d,%d],[%d,%d,%d],[%d,%d,%d]", &square[0][0], &square[0][1], &square[0][2], &square[1][0], &square[1][1], &square[1][2], &square[2][0], &square[2][1], &square[2][2]);
	
	int i, j;
	for(i = 0; i < 3; i ++){
		cout << "[";
		for(j = 2; j >= 0; j --){
			cout << square[j][i];
			if(j > 0)cout << ",";
		}
		cout << "]";
		if(i < 2)cout << ",";
	}
	
	return 0;
}
