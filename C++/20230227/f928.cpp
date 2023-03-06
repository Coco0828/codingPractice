#include<iostream>
using namespace std;

void bomb(int a[], int m, int n){
    if(m < n && m >= 0){
        if(a[m] == 1){
            a[m] = 0;
        } else if(a[m] == 2){
            a[m] = 0;
            bomb(a, m+1, n);
            bomb(a, m-1, n);
        } else if(a[m]!= 0){
            int t = a[m];
            a[m] = 0;
            bomb(a, m+t, n);
            bomb(a, m+t*2, n);
            bomb(a, m-t, n);
            bomb(a, m-t*2, n);
        } else{
            a[m] = 0;
        }
    }
}

int main(){
    int n, m;
    cin >> n;

    int a[1111] = {};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> m;
    bomb(a, m, n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

 
