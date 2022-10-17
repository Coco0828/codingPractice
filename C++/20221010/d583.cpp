#include<iostream>
using namespace std;

int main(){
    int n;
    
    while(cin >> n){
        for(int i = 0; i < n; i ++){
            int a;
            cin >> a;
        }
        for(int i = 1; i <= n; i ++) cout << i << " ";
        cout << endl;
    }
}
