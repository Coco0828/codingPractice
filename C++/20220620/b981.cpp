#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m;
	//scanf("%dh%dm", &n, &m);
	//cout << n << " " << m;
	
	if(scanf("%dhour", &n)){
		cout << n;
	}
	else if(scanf("%dh%dm", &n, &m)){
		cout << n << " " << m;
	}
	
	
	return 0;
}
