#include <iostream>
using namespace std;

int n, q, a[3][20];
int main() {	
    for (int i = 1; i <= 15; i ++){
        a[0][i] = i;
        a[1][i] = a[0][i-1] + a[1][i-1];
        a[2][i] = a[1][i-1] + a[2][i-1];
    }
    cin >> n;
    
    while(n){
        cin >> q;
        int i;
        for (i = 2; i <= 15; i ++){
            if (a[0][i-2]+a[1][i-1]+a[2][i] >= q){
                q -= a[2][i];
                cout << i;
                break;
            }
        }
        for (int j = 1; j < i; j++){
            if (a[0][j-1]+a[1][j] >= q){
                q -= a[1][j];
                cout << j << q << "\n";
                break;
            }
        }
        
        n --;
    }
}
