#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int n, x = 0, ans = 0;
	cin >> n;
	
	while(n){
		string input;
		cin >> input;
		
		if(input == "L") x --;
		else if(input == "R") x ++;
		else{
			int p;
			cin >> p, ans += (p == x);
		}
		
		n --;
	}
	
	cout << ans << endl;
	
	return 0;
}
