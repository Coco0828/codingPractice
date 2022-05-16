#include <iostream>
using namespace std;

int main(){
	int T, N, M, i, j;
	
	cin >> T;
	
	while(T){
		j = 0;
		int shape[100], shapeB[100];
		
		cin >> N >> M;
		
		int len = N*M;
		
		for(i = 0; i < len; i ++){
			cin >> shape[i];
			shapeB[len-i-1] = shape[i];
		}
		
		for(i = 0; i < len; i ++){
			if(shape[i] != shapeB[i]) j++;
		}
		
		(j == 0)?cout << "go forward":cout << "keep defending";
		cout << endl;
		
		T --;
	}
	
	
	return 0;
}
