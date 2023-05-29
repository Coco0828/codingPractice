#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	float mB, mV;
	
	while(cin >> name >> mB >> mV){
		float index = mB - mV;
		printf("%s %.2f ", name, index);
		if(index >= -0.35 && index <= -0.251) cout << "O";
		else if(index >= -0.25 && index <= -0.001) cout << "B";
		else if(index >= 0 && index <= 0.249) cout << "A"; 
		else if(index >= 0.25 && index <= 0.499) cout << "F";
		else if(index >= 0.5 && index <= 0.999) cout << "G";
		else if(index >= 1 && index <= 1.499) cout << "K";
		else if(index >= 1.5 && index <= 2) cout << "M";
	}
	
	return 0;
}
