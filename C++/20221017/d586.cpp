#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m, input;
	cin >> n;
	
	//vector<char> numtoal = {"m", "j", "q", "h", "o", "f", "a", "w", "c", "p", "n", "s", "e", "x", "d", "k", "v", "g", "t", "z", "b", "l", "r", "y", "u", "i"};
	
	while(n){
		vector<char> a;
		
		cin >> m;
		for(int i = 0; i < m; i ++){
			cin >> input;
			a.push_back(input);
		}
		
		if(0 < (a.begin() - '0') < 27){
			for(int i = 0; i < m; i ++){
				
				
			}
		}
		
		n --;
	}
	
	return 0;
}
