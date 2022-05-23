#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	while(N){
		int H1, M1, H2, M2, M3;
		int sub;
		
		cin >> H1 >> M1 >> H2 >> M2 >> M3;
		
		sub = ((H2-H1) * 60 + M2) - M1;
		
		(M3 <= sub)?cout << "Yes":cout << "No";
		cout << endl;
		
		N --;
	}
	
	return 0;
}
