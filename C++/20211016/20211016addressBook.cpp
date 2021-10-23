#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	map<string, int> a;
	map<string, int>::iterator it;
	
	string way = "0";
	string name;
	int phone;
	
	while(way != "q"){
		cin >> way >> name >> phone;
		
		if(way == "i"){
			a.insert(map<string, int>::value_type(name, phone));
		} else if(way == "d"){
			a.erase(name);
		} else if(way == "f"){
    		if((it = a.find(name))!=a.end()){
    	    	cout<< name << " " << (*it).second << endl;
    		}
		} else if(way == "l"){
			for(it = a.begin();it != a.end(); it++){
				cout << (*it).first << " " << (*it).second << endl;
			}
			cout << "共" << a.size() << "個資料節點" << endl;
		}
	}
	
	cout << "程式即將結束" << endl;
	
	
	return 0;
}
