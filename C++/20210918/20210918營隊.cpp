#include <iostream>
using namespace std;

int main(){
	int N, M, K;
	int answer;
	
	cin >> N;
	cin >> M;
	cin >> K;
	
	answer = N + M - K;
	
	cout << "answer: " << answer;
	
	return 0;
}
