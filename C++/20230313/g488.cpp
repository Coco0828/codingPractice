#include <iostream>
using namespace std;

int cal(int x){
	if(x == 1) return 1;
	else return cal(x-1) + x*x - x + 1;
}

int main(){
	int x;
	cin >> x;
	
	cout << cal(x);
	
	return 0;
}
