#include <iostream>
using namespace std;

int main(){
   	int decimal;
   	int i, j;
    int binary[1000];
    while(cin >> decimal){
    	if(decimal == 0){
    		cout << 0;
    		return 0;
		}
		if(decimal == 1){
			cout << 1;
			return 0;
		}
        /*for(i = 0; decimal >= 0; i ++){
        	binary[i] = decimal % 2;
            decimal = decimal / 2;
		}*/
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
}

