#include <iostream>
using namespace std;

int main(){
	int year[2];
	cin >> year[0];
	cin >> year[1];
	
	int i;
	
	for(i = 0; i < 2; i ++){
		if(year[i] % 4 == 0 && year[i] % 100 != 0) cout << "閏年" << endl;
		else if(year[i] % 400 == 0) cout << "閏年" << endl;
		else cout << "平年" << endl;
	}
	
	return 0;
}
/*#include <iostream>
using namespace std;

int main(){
	int year;
	while(cin >> year){
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			cout << "閏年\n";
		}
		else{
			cout << "平年\n";
		}
	}
	
	return 0;
}*/
