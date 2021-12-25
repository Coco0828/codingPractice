#include <iostream>
using namespace std;

int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	
	double answer = 1.00;
	int i;
	
	if(n > 0){
		for(i = 0; i < n; i ++){
			answer = answer * x;
		}
		cout << answer;
	}else if(n == 0){
		cout << answer;
	}else{
		n = n * (-1);
		for(i = 0; i < n; i ++){
			answer = answer * x;
		}
		answer = 100 / answer / 100;
		cout << answer;
	}
	
	return 0;
}
