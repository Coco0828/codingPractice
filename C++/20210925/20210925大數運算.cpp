#include <iostream>
using namespace std;

int main(){
	__int64 a, b, answer;
	char way;
	
	cin >> a >> way >> b;
	
	if(way == '+') answer = a + b; 
	else if(way == '-') answer = a - b;
	else if(way == '*') answer = a * b;
	else if(way == '/') answer = a / b;
	
	cout << answer;
	
	return 0;
}
