#include <iostream>
using namespace std;

int main(){
	int year[2];
	cin >> year[0];
	cin >> year[1];
	
	int i;
	
	for(i = 0; i < 2; i ++){
		if(year[i] % 4 == 0 && year[i] % 100 != 0) cout << "�|�~" << endl;
		else if(year[i] % 400 == 0) cout << "�|�~" << endl;
		else cout << "���~" << endl;
	}
	
	return 0;
}
/*#include <iostream>
using namespace std;

int main(){
	int year;
	while(cin >> year){
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			cout << "�|�~\n";
		}
		else{
			cout << "���~\n";
		}
	}
	
	return 0;
}*/
