#include <iostream>
using namespace std;

int main(){
    int input, i;
    int binary[100];
    while(scanf("%d", &input) != EOF){
		binary[100] = {0};
        i = 0;
                
        while(input){
            binary[i] = input % 2;
            input /= 2;
            i++;
        }
        for(i = i-1; i>=0; i--){
        	cout << binary[i];
		}
		cout << endl;
	}
	return 0;
}
