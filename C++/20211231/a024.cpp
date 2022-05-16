#include <iostream>
using namespace std;

int main(){
	__int64 m, n, i, min;
	
	scanf("%d %d", &m, &n);
	
	for(i = m; i > 0; i --){
		if(m % i == 0 && n % i == 0){
			min = i;
			break;
		}
	}
	cout << min << endl;
	
	return 0;
}
