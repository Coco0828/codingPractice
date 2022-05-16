#include <iostream>
using namespace std;

int main(){
	int input;
	int answer = 0;
	cin >> input;
	
	if(input <= 10) answer = 6 * input;
	else if(input > 10 && input <= 20) answer = 60 + ((input - 10) * 2);
	else if(input > 20 && input <= 40) answer = 80 + ((input - 20) * 1);
	else answer = 100;
	
	cout << answer;
	
	return 0;
}
