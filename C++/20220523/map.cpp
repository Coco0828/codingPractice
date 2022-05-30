/*#include <iostream>
#include <map>
using namespace std;*/

/*int main(){
	string input;
	cin >> input;
	
	map<string, int> week;
	
	week["Mon"] = 1;
	week["Tue"] = 2;
	week["Wed"] = 3;
	week["Thu"] = 4;
	week["Fri"] = 5;
	week["Sat"] = 6;
	week["Sun"] = 7;	
	
	cout << week[input];
	
	return 0;
} */

/*int main(){
	map<char,int> m;
	char c;

	m['a'] = 101;
	m['b'] = 202;
	m['g'] = 303;

	for(c = 'a';c <= 'g';c++){
   		cout << c;
    	(m.count(c)>0)?cout << "yes" : cout << "no";
    	cout << endl; 
	}
}

*/

/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int I[7] = {1,3,2,5,1,2,1};
    int *it;
    it = find(&I[0],&I[7],9);
    cout << it << endl;
    if(it == I + 7)
        cout << "data not found\n";
    else
        cout << *it << endl;
    return 0;
}*/

/*#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main(){
    list<int>L;
    list<int>::iterator it;
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    it = find(L.begin(),L.end(),20);
    
    if(it == L.end())
        cout << "data not found\n";
    else
        cout << *it << endl;
    return 0;
}*/

#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;
int main(){
    int a[7] = {1,3,2,4,1,2,1};
    vector<int> v(a,a+7);
    vector<int>:: iterator it;
    list <int> L;
    L.push_back(4);
    L.push_back(1);
    L.push_back(2);
    it = search(v.begin(),v.end(),L.begin(),L.end());
    if(it != v.end())
        cout << *it << " " << *(it+1) << " " << *(it+2) << endl;
    
    return 0;
}
