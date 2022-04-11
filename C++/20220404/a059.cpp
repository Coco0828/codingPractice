#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	
	int n = 1;
	
	while(T){
		int a, b;
		int i, sum = 0;
		
		cin >> a;
		cin >> b;
		
		for(i = 1; i < b; i ++){
			if(((i * i)>= a) && ((i * i) <= b)) sum += (i * i);
		}
		
		cout << "Case " << n << ": " << sum << endl;
		
		T --;
		n ++;
	}
	
	
	return 0;
}
