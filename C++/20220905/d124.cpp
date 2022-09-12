#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char n[1000000];
    while(scanf("%s", &n)!=EOF){   
        int sum = 0;
        for(int i = 0; i < strlen(n); i++){
            sum += n[i] - '0';
        }
            if(sum % 3 == 0) cout << "yes";
            else cout << "no";
            cout << endl; 
    }
	
	return 0;
}
