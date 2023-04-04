#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;

int binary(int n){
	static int ex = -1;
	ex ++;
	if(n%10!=n){
		return binary(n/10) + (pow(2, ex)*(n%10));
	}else{
		return pow(2, ex) * n;
	}
}
int main(){
	int m, n;
	cin >> m >> n;
	
	string a, b;
	cin >> a;
	cin >> b; 
	
	string c;
	c.append(a);
	c.append(b);
	
	int intc;
	stringstream ss;
	ss << c;
	ss >> intc;
	int bic = binary(intc);
	cout << bic % 998244353;
	
	return 0;
}
