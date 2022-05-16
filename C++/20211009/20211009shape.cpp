#include <iostream>
using namespace std;

int main(){	
	int N, M;
	
	int i, j;
	int shape[5][5];
	
	scanf("%d %d", &N, &M);
	
	for(i = 0; i < N; i ++){
		for(j = 0; j < M; j ++){
			scanf("%d ", &shape[i][j]);
		}
	}
	
	int k = 0;
	
	for(i = 0; i < N; i ++){
		for(j = 0; j < M; j ++){
			if(shape[i][j] != shape[N-i-1][M-j-1]) k = 1;
		}
	}
	
	(k == 0)?cout << "go forward" << endl:cout << "keep defending" << endl;
	
	return 0;
}
