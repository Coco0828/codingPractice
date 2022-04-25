#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	while(N){
		int a;
		long long int b, c;
		cin >> a >> b >> c;
		
		if(a == 1) cout << b+c;
		else if(a == 2) cout << b-c;
		else if(a == 3) cout << b*c;
		else cout << b/c;
		
		cout << endl;
		
		N--;
	} 
	
	
	return 0;
}
