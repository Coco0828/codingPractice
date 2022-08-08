#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char con[1000], items[1000];
	
	while(cin >> con){
		gets(items);
		
		for(int i = 1; i < strlen(items); i++){
			cout << items[i];
			if(items[i] == ' '){
				cout << con << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
