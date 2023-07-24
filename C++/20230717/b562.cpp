#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	while(getline(cin, input)){
		int ans = 0, c = 1;
		for(int i = 0; i < input.size(); i ++){
			if(input[i] == '1'){
				for(int j = 0; j < input.size()-i-1; j ++){
					c *= -2;
				}
				ans += c;
			}
			c = 1;
		}
		cout << ans << endl;
	}
	
	return 0;
}
