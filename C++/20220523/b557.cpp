#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	
	while(T){
		int N;
		cin >> N;
		
		int length[100];
		int i, j, k;
		
		for(i = 0; i < N; i ++) cin >> length[i];
		
		int ans = 0;
		
		for(i = 0; i < N; i ++){
			for(j = 0; j < N; j ++){
				for(k = 0; k < N; k ++){
					if((length[j] * length[j]) + (length[k] * length[k]) == (length[i] * length[i])){
						ans ++;
						//cout << length[j] << " " << length[k] << " " << length[i] << endl;
					}
				}
			}
		}
		
		if(ans == 0){
			cout << ans;
		} else{
			if(ans % 2 == 0){
				cout << (ans / 2);
			} else{
				cout << (ans / 2 - 1);
			}
		}
		cout << endl;
		
		T --;
	}
	
	return 0;
}
