#include <iostream>
using namespace std;

int main(){
	int N, ans;
	
	while(scanf("%d", &N) && N){
		ans = 0;
		while(N % 2){
			ans ++;
			N /= 2;
		}
		printf("%d\n", ans);
	}
	
	return 0;
}
