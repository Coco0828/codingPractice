#include <iostream>
#include <string>
using namespace std;

int main(){	
	string a, b;
	
	cin >> a;
	cin >> b;
	
	int intA[250] = {0}, intB[250] = {0}, ans[250] = {0};
	int i, carry = 0;
	
	string a_reverse = a;
	
	for(i = 0; i < a.size() / 2; i ++){
    	swap(a_reverse[i], a_reverse[a.size()-i-1]);
	}

	for(i = 0; i < a.size(); i ++){
	    intA[i] = a_reverse[i] - '0';
	}

	string b_reverse = b;
	
	for(i = 0; i < b.size() / 2; i ++){
    	swap(b_reverse[i], b_reverse[b.size()-i-1]);
	}

	for(i = 0; i < b.size(); i ++){
	    intB[i] = b_reverse[i] - '0';
	}
	
	for(i = 0;i < 25;i ++){
    	ans[i] = intA[i] + intB[i] + carry;
    	if(ans[i] >= 10){
    	    ans[i] -= 10;
    	    carry = 1;
    	}else{
			carry = 0;
    	}
	}
	
	if(a.size() >= b.size()){
		if(carry = 1){
			for(i = a.size() + 1; i >= 0; i --){
				cout << ans[i];
			}
		} else{
			for(i = a.size(); i >= 0; i --){
				cout << ans[i];
			}
		}
	} else{
		if(carry = 1){
			for(i = b.size() + 1; i >= 0; i --){
				cout << ans[i];
			}
		} else{
			for(i = b.size(); i >= 0; i --){
				cout << ans[i];
			}
		}
	}
	
	return 0;
}
