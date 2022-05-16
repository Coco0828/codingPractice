#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0) cout << 0;
        while(n % 10 == 0 && n) n = n / 10;
        while(n % 10 || n >= 10){
            cout << n % 10;
            n = n / 10;
        }
        cout<<endl;
    }
}

