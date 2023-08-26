#include <iostream>
using namespace std;

int main(){
	string input;
	
	while(getline(cin, input)){
		int ans = 1;
		for(int i = 0; i < input.size(); i ++){
			if(input[i] == ' ') ans ++;
		}
		cout << ans << endl;
	}
	
	return 0;
}
