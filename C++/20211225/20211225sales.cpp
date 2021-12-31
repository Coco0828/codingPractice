#include <iostream>
using namespace std;

int main(){
	int T;
	int n;
	int array[10] = {0};
	int ans1 = 0, ans2 = 0;
	
	cin >> T;
	
	int i, j;
	while(T){
		cin >> n;
		for(i = 0; i < n; i ++){
			cin >> array[i];
		}
		for(i = 0; i < n; i ++){
			for(j = 0; j < i; j ++){
				if(array[j] <= array[i]){
					if(T == 2)ans1++;
					else ans2++;
				}
			}
		}
		T--;
	}
	
	cout << ans1 << "\n" << ans2 << endl;
	
	return 0;
}
