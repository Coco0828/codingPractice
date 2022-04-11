#include <iostream>
#include <string>
using namespace std;

int main(){
	char alphabets[26][2] = {"A", "B", "C", "D", "E", "F", "G", "H",
							 "I", "J", "K", "L", "M", "N", "O", "P",
							 "Q", "R", "S", "T", "U", "V", "W", "X",
							 "Y", "Z"};
	
	string input;
	int j, i, a, b, sub;
	
	while(cin >> input){
		for(j = 0; j < 6; j ++){
			for(i = 0; i < 26; i ++){
				if(alphabets[i][0] == input[j]) a = i;
				if(alphabets[i][0] == input[j+1]) b = i;
			}
			if(a > b) sub = a - b;
			else sub = b - a;
			cout << sub;
		}
	}
	
	
	return 0;
}
