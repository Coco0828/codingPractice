#include <iostream>
#include <vector>
using namespace std;

int main(){
	int input;
	cin >> input;
	int b = input;
	
	vector<int> divisor;
	
	int i, j, m=0, k=0;
	
	while(k==0){
		for(i = 2; i <= input; i ++){
			if(input % i == 0){
				divisor.push_back(i);
				input = input / i;
				for(j = 2; j < input; j ++){
					if(input % j == 0){
						m++;
					}
				}
				if(m == 0){
					k = 1;
					divisor.push_back(input);
				}
				else m = 0;
				
				break;
			}
		}
	}
	
	int a = 1;
	
	if(divisor[1] == 1){
		cout << b;
	} else {
		for(i = 0; i < divisor.size(); i ++){
			if(divisor[i] == divisor[i+1]){
				a++;
			} else{
				if(a == 1) cout << divisor[i];
				else cout << divisor[i] << "^" << a;
				a = 1;
				if(i == divisor.size()-1){
					break;
				} else cout << " * ";
			}
		}	
	}
	
	return 0;
}
