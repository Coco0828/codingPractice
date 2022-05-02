#include <iostream>
using namespace std;

int main(){
	int password[4], input[4], a[4];
	int n, i, j, p, q;
	
	while(cin >> password[0] >> password[1] >> password[2] >> password[3]){
		cin >> n;
		while(n){
			for(i = 0; i < 4; i ++) a[i] = password[i];
			p = 0;
			q = 0;
			for(i = 0; i < 4; i ++) cin >> input[i];
			for(i = 0; i < 4; i ++){
				if(input[i] == a[i]){
					a[i] = 10;
					input[i] = 11;
					p ++;
				}
			}
			
			/*for(i = 0; i < 4; i ++){
				cout << input[i] << " ";
			}
			cout << endl;
			for(i = 0; i < 4; i ++){
				cout << a[i] << " ";
			}
			cout << endl;*/
			
			for(i = 0; i < 4; i ++){
				for(j = 0; j < 4; j ++){
					if(input[i] == a[j]){
						a[j] = 10;
						input[i] = 11;
						q ++;
					}
				}
			}
			
			/*for(i = 0; i < 4; i ++){
				cout << input[i] << " ";
			}
			cout << endl;
			for(i = 0; i < 4; i ++){
				cout << a[i] << " ";
			}
			cout << endl;*/
			
			cout << p << "A" << q << "B" << endl;
			
			n --;
		}
	}
	
	
	return 0;
}
