#include <iostream>
using namespace std;

int main(){
	int N, M, K;
	int answer;
	int i, min, max;
	
	cin >> N;
	cin >> M;
	cin >> K;
	
	for(i = 4; i > 1; i --){
		if(N % i == 0 && M % i == 0){
			min = i;
			break;
		}
	}
	
	max = (N/min) * (M/min) * min;
	
	answer = K / max;
	
	cout << "answer: " << answer;
	
	return 0;
}
