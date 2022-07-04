#include <iostream>
#include <string>
using namespace std;

int main(){
	string ans;
	cin >> ans;
	int n;
	cin >> n;
	
	while(n){
		string input;
		int a = 0, b = 0;
		
		cin >> input;
		
		for(int i = 0; i < 4; i ++){
			for(int j = 0; j < 4; j ++){
				if(input[i] == ans[j]){
					if(i == j) a ++;
					else b ++;
				}
			}
		}
		
		cout << a << "A" << b << "B" << endl; 
		
		n --;
	}
	
	
	return 0;
} 
