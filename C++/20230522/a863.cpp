#include <iostream>
using namespace std;

int main(){
	int n, i, tmp;
	while(cin >> n){
		for (i = n; i != 1 && i != 4; i = tmp){
            tmp = 0;
            while(i){
                tmp += (i % 10) * (i % 10);
                i /= 10;
            }
        }
        if (i == 1)
            cout << n << " is a happy number" << endl;
        else if (i == 4)
            cout << n << " is an unhappy number" << endl;
		
	}
	
	return 0;
}
