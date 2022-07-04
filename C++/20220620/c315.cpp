#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int x = 0, y = 0;
	
	while(N){
		int a, b;
		cin >> a >> b;
		
		if(a == 0){
			y += b;
		} else if(a == 1){
			x += b;
		} else if(a == 2){
			y -= b;
		} else if(a == 3){
			x -= b;
		}
		
		N --;
	}
	
	cout << x << " " << y;
	
	return 0;
}
