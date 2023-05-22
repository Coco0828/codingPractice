#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int m;
    while(cin >> m){
	    int x = 0, y = 0, l;
		int n[m];    

        for(int i = 0; i < m; i++)cin >> n[i];
        sort(n , n + m);
        for(int i = m - 1; i >= 0; i--){
            if (x <= y){
                x *= 10;                
                x += n[i];
            }
			else{
                y *= 10;
                y += n[i];
            }
        }

        l = x * y;
        cout << l << endl;

    }

    return 0;

}

 
 
