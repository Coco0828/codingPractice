#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	
	while(cin >> input){
		int n = 1;
		int max = 0;
		char maxC;
		
		for(int i = 1; i < input.length(); i++){	
			if(input[i] == input[i-1])
				n ++;
			else 
				n = 1;
			
			if(n > max){
				max = n;
				maxC = input[i];
			}
		}
		
		cout << maxC << " " << max << endl; 
	}
	
	return 0;
}
