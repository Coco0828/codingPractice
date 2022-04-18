#include <iostream>
using namespace std;

int main(){
	float n, a, sum;
	while(cin >> n){
		sum = 0;
		for(int i = 0; i < n; i ++){
			cin >> a;
			sum += a;
		}
		(sum/n > 59)? cout << "no":cout << "yes";
		cout << endl;
	}
	
	
	return 0;
}
