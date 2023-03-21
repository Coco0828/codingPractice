#include <iostream>
using namespace std;

int main(){
	string input;
	cin >> input;
	
	char al[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
	int sum = 0;
	for(int i = 0; i < input.length(); i ++){
		for(int j = 0; j < 26; j ++){
			if(al[j] == input[i]) sum += (j + 1);
		}
	}
	
	cout << sum;
	
	return 0;
} 
