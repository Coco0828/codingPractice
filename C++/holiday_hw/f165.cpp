#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	if(b && a % b){
		cout << a % b << endl;	
	}else{
		cout << "OK!" << endl;
	}
	
	return 0;
}
