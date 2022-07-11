#include <iostream>
using namespace std;

int main(){
	int a, b;
	char way;
	
	scanf("%d %c %d", &a, &way, &b);
	
	if(way == '+') cout << a + b << endl;
	else if(way == '-') cout << a - b << endl;
	else if(way == '*') cout << a * b << endl;
	else cout << a / b << endl; 
	
	return 0;
} 
