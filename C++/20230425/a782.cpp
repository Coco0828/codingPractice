#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
	string input;
	while(cin >> input && input != "END"){
		vector<char> a;
		vector<string> b;
		istringstream ss(input);
    	string del;
 
		while(getline(ss, del, ' ')) {
      		a.push_back(del[0] - 32);
      		b.push_back(del);
		}
		for(int i = 0; i < a.size(); i ++){
			cout << a[i];
		}
		
		
		//cout << " " << b.back() << endl;
	}
	
	return 0;
}
