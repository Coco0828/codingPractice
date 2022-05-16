#include <iostream>
using namespace std;

int main(){
   	int decimal;
   	int i, j;
    int binary[1000];
    while(cin >> decimal){
    	if(decimal == 0){
    		cout << 0;
    		break;
		}
		if(decimal == 1){
			cout << 1;
			break;
		}
		while(decimal){
			binary[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
		}
        for(j = i; j >= 0;j --){
        	if(j != i || binary[j] != 0){
        		cout << binary[j];
			}
		}
    }
    return 0;
}

