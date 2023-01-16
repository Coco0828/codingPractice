#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int max = 0, min = 10001;
	
	while(N){
		int input;
		cin >> input;
		
		if(input > max) max = input;
		if(input < min) min = input;
		
		N --;
	}
	
	cout << max << " " << min << endl;
	
	return 0;
}
