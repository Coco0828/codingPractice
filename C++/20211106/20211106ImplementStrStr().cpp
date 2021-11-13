#include <iostream>
#include <string> 
using namespace std;

int main(){
	string haystack;
	string needle;
	
	cout << "haystack: "; 
	cin >> haystack;
	
	cout << "needle: ";
	cin >> needle;
	
	int i, k = 0;
	
	if(needle.length() == 0) cout << "0";
	
	if(needle.length() == 1){
		for(i = 0; i < haystack.length(); i ++){
			if(haystack[i] == needle[0]){
				cout << i;
				break;
			} else k ++;
		}
		if(k == haystack.length()) cout << "-1";	
	}
	
	if(needle.length() == 2){
		for(i = 0; i < haystack.length(); i ++){
			if(haystack[i] == needle[0] && haystack[i+1] == needle[1]){
				cout << i;
				break;
			} else k ++;
		}
		if(k == haystack.length()) cout << "-1";	
	}
	
	
	
	return 0;
}
