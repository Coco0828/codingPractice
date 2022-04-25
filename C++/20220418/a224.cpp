#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	
	while(cin >> a){
		string b;
	
		for(int i = 0; i < a.length(); i ++){
			if(a[a.length()-i-1] >= 65 && a[a.length()-i-1] <= 90){
				b[i] = a[a.length()-i-1] - 32;
			}
			else if(a[a.length()-i-1] >= 97 && a[a.length()-i-1] <= 122){
				b[i] = a[a.length()-i-1];
			}
		}
		
		()?cout << "yes !":cout << "no...";
		cout << endl;
	}
	 
	
	return 0;
}
