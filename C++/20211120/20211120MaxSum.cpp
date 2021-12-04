#include <iostream>
using namespace std;

int main(){
	int nums[5];
	int a, index = 0;
	
	while(cin >> a){
		nums[index++] = a;
		char enter = getchar();
		if(enter == '\n'){
			break;
		}
	}
	
	int i, j, k, n = 0, max = 0;
	
	for(i = 0; i < 5; i ++){
		for(j = i; j < 5; j ++){
			for(k = i; k <= j; k ++){
				n += nums[k];
			}
			if(n >= max) max = n;
			n = 0;
		}
	}
	
	cout << max;
	
	return 0;
}
