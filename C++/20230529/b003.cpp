#include <iostream>
using namespace std;

int main(){
	long long int k;
    while(cin >> k){
        long long int sum = 0;
        long long int cnt = 0;
        if(k < 0) k = -k;
        while(sum < k) sum += ++cnt;
        while((sum - k)& 1) sum += ++cnt;
        cout<<cnt<<endl;
    }
	
	return 0;
}
