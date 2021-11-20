#include <iostream>
using namespace std;

int main(){
	int t;
	int a, b, c, d, e;
	
	while(cin >> t){
		while(t-->=1){
			scanf("%d %d %d %d", &a, &b, &c, &d);
			if((b-a) == (c-b)) e = d + (b-a);
			else if((b/a) == (c/b)) e = d * (b/a);
			printf("%d %d %d %d %d", a, b, c, d, e);
		}
	}
	
	return 0;
}
