#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int sum = 0;
	
	for(int i = 1; i <= c; i ++){
		if(i % a == 0 || i % b == 0) sum += i;
	}
	if(sum > 26) sum = sum % 26;
	
	char al[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	cout << al[sum-1];
	
	return 0;
}
