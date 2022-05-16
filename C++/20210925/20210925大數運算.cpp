#include <iostream>
#include <string>
using namespace std;

int main(){
	unsigned long long int a, b, answer;
	char way;
	
	scanf("%d %c %d", &a, &way, &b);
	
	if(way == '+') answer = a + b; 
	else if(way == '-') answer = a - b;
	else if(way == '*') answer = a * b;
	else if(way == '/') answer = a / b;
	
	cout << answer;
	
	return 0;
}
