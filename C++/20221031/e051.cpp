#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cin >> a;
	
	int count;
	while(a[count] != '\0') count ++;
    
    for(int i = 1; i < count - 1; i ++) a[i] = '_';
    for(int i = 0; i < count; i ++) cout << a[i];
	
	return 0;
}
