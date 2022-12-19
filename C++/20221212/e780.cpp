#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int n, x = 0, ans = 0, k = 0;
	cin >> n;
	
	while(n){
		string input;
		cin >> input;
		
		if(input == "L") x --;
		else if(input == "R") x ++;
		else{
			if(k){
				k = 0;
				int p;
				stringstream(input) >> p;
				if(x == p) ans ++; 	
			} else k = 1;
		}
		
		n --;
	}
	
	cout << ans << endl;
	
	return 0;
}
