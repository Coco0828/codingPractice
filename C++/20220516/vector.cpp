#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

/*int main(){
    vector<int> v;
    int sum = 0;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    while(!v.empty()){
        sum +=v.back();
        v.pop_back();
    }
    cout << "sum = "<<sum<<endl;
    cout << v[0] << " " << v[1] << " " << v.size() << endl;
    return 0;
}*/

/*int main(){
    vector<int> v;
    vector<int>::iterator it;
    for(int i=1;i <= 5;i ++){
        v.push_back(i);
    }
    for(it = v.begin();it<v.end();it= it+2){
        cout << " " << *it << endl;
    }
    cout << v.size();

    cout << endl;
    return 0;
}*/

/*int main(){
    int i;
    vector<int> v;
    int a[] = {10,20,30};
    v.insert(v.begin(),a,a+3);
    v.insert(v.begin()+1,15);
    v.insert(v.end(),100);
    for(i = 0;i  < v.size();i ++)
        cout << " " << v[i];
    cout << endl;
    return 0;
}*/

/*int main(){
    int i;
    vector<int> v;
    for(int i = 1;i <=10;i ++)v.push_back(i);
    v.erase(v.begin()+5);
    v.erase(v.begin(),v.begin()+3);
    
    for(i = 0;i < v.size();i ++)
        cout << " " << v[i];
    cout << endl;
    cout << v.size();
    return 0;
}*/

/*int main(){
    int a[] = {17,89,7,14};
    list<int> L(a,a+4);
    list<int>::iterator it;
    L.reverse();
    
    for(it = L.begin(); it != L.end(); it ++){
    	cout << *it << " ";
	}
    
    return 0;
}*/

/*int main(){
    int a[] = {17,89,7,14};
    list<int> L(a,a+4);
    list<int>::iterator it;
    L.remove(1);
    //L.remove(89);
    for(it = L.begin(); it!= L.end(); ++it)
        cout << " " << *it;
    cout << endl;
    
    return 0;
}*/

/*int main(){
    list<double> L1,L2;
    list<double>::iterator it;
    
    L1.push_back(3.1);
    L1.push_back(2.2);
    L1.push_back(2.9);
    
    L2.push_back(3.7);
    L2.push_back(7.1);
    L2.push_back(1.4);
    L1.merge(L2);
    
    L2.push_back(2.1);
    L1.merge(L2);
    
    for(it = L1.begin(); it!= L1.end(); it++){
    	cout << *it << " ";
	}
	cout << L1.size() << endl;
	
	for(it = L2.begin(); it!= L2.end(); it++){
    	cout << *it << " ";
	}
	cout << L2.size();
    
    return 0;
}*/

int main(){
    map<char,string> m;
    map<char,string>::iterator it;
    
    m['a'] = "Amy";
    m['b'] = "Bob";
    m['j'] = "Joe";
    
    for(it = m.begin();it != m.end();it ++)
        cout << "key is " << (*it).first << " value is " << (*it).second << endl;
    return 0;
}
