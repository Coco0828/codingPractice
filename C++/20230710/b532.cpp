#include <iostream>
using namespace std;

int main(){
	long long int n;
	while(cin >> n){
		string str;
		long int a, b;
		int c=0, d, answer;
		
		for(int i = 0; i < n; i ++){
			cin >> str;
			for(int j = 0; j < str.size(); j ++){
				if(str[j] > 57);
				else if(str[j] == '+'){
					d = '+';
					c = i;
					break;
				}
				else if(str[j] == '-'){
					d = '-';
					c = i;
					break;
				}
				else if(str[j] == '*'){
					d = '*';
					c = i;
					break;
				}
				else if(str[j] == '/'){
					d = '/';
					c = i;
					break;
				}
				else if(str[j] == '%'){
					d = '%';
					c = i;
					break;
				}
				else{
					a += str[i] - 48;
					a *= 0;
				}
			}
			a /= 10;
			for(int j = c+1; j < str.size(); j ++){
				if(str[j] > 57);
				else{
					b += str[j] - 48;
					b *= 10;
				}
			}
			b /= 10;
			if(d == 43) answer = a+b;
			else if(d == 45) answer = a-b;
			else if(d == 42) answer = a*b;
			else if(d == 47) answer = a/b;
			else answer = a%b;
			cout << answer << endl;
			a = 0;
			b = 0;
		}
		
	}
	
	return 0;
}
