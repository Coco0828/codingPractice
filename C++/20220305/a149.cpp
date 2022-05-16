#include <iostream>
using namespace std;

int main(){
	int T, a, input, n, answer;
	
	while(cin >> T){
		for(int i = 0; i < T; i ++){
			cin >> a;
			input = a;
			answer = 1;
			while(input > 0){
				n = input % 10;
				input /= 10;
				answer *= n;
			}
			if(a != 0) cout << answer << endl;
			else cout << 0 << endl;
		}
	}
	
	
	return 0;
}
