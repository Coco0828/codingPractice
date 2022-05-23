#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T, N, M, i, j;
	
	cin >> T;
	
	while(T){
		j = 0;
		int input[100];
		
		cin >> N >> M;
		
		int len = N*M;
		
		for(i = 0; i < len; i ++){
			cin >> input[i];
		}
		
		vector<int> shape(input, input+len);
		vector<int> shapeB;
		vector<int>::iterator it;
		
		for(it = shape.begin(); it != shape.end(); it ++){
			shapeB[len-it-1] = shape[it];
		}
		
		for(it = shape.begin(); it != shape.end(); it ++){
			if(shape[it] != shapeB[it]) j++;
		}
		
		(j == 0)?cout << "go forward":cout << "keep defending";
		cout << endl;
		
		T --;
	}
	
	
	return 0;
}
