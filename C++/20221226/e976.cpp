#include <iostream>
using namespace std;

int main(){
	int h, m, s;
	
	while(cin >> h >> m >> s){
		printf("%d %d %d. ", h, m, s);
		(h*s >= m)?cout << "I will make it!":cout << "I will be late!";
		cout << endl;
	}
	
	return 0;
}
