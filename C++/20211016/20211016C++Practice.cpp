/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[7]={8,1,3,2,5,1,4};
    vector<int> v(a,a+7);
    vector<int>::iterator it;
    for( it = v.begin(); it!= v.end();it++){
        cout << *it <<"";
    }
    cout << endl;
    
    return 0;
}*/

/*#include<iostream>
#include<vector>

using namespace std;

int main(){
    int a[]={16,2,77,29};
    vector<int> v;
    
    int i;
    
    v.insert(v.begin(),a,a+3);
    v.insert(v.begin()+1,15);
    v.insert(v.end(),100);
    for(i = 0;i<v.size();i++)
        cout<<" "<<v[i];
    cout<<endl;
    return 0;    
}*/

/*#include<iostream>
#include<list>
using namespace std;

int main(){
    int a[]={17,89,7,14};
    list<int> L(a,a+4);
    list<int>::iterator it;
    
    L.remove(89);
    
    for(it = L.begin();it!=L.end();++it)
        cout<<" "<< *it;
    cout<<endl;
    return 0;
}*/

/*#include<iostream>
#include<list>
using namespace std;

int main(){
    
    list<double> L1,L2;
    list<double>::iterator it;
    
    L1.push_back(3.1);
    L1.push_back(3.2);
    L1.push_back(3.3);
    
    L2.push_back(1.3);
    L2.push_back(1.0);
    L2.push_back(1.2);
    
    L1.merge(L2);
    
    L2.push_back(2.1);
    L1.merge(L2);
    
    for(it = L1.begin();it!=L1.end();++it)
        cout<<" "<< *it;
    cout<<endl;
    
    
    return 0;
}*/

/*#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<char,string> m;
    map<char,string>::iterator it;
    
    m['a'] = "Andy";
    m['b'] = "Bob";
    m['c'] = "Catheren";
    
    for(it = m.begin();it!=m.end();++it)
        cout<<"m['"<< (*it).first<<"'] is " <<(*it).second<<endl;
    cout<<"m now contains "<<m.size() <<" emelents."<<endl;
    
    return 0;
}*/

/*#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<char,int> m;
    map<char,int>::iterator it;
    
    m['a'] = 10;
    m['b'] = 20;
    m['c'] = 30;
    m['d'] = 40;
    m['e'] = 50;
    m['f'] = 60;
    m['g'] = 70;
    
    it = m.find('b');
    m.erase(it);
    m.erase('c');
    it=m.find('e');
    m.erase(it,m.end());
    
    for(it = m.begin();it!=m.end();++it)
        cout<<"m['"<< (*it).first<<"'] is " <<(*it).second<<endl;

    
    return 0;
}*/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,string> m;
    map<string,string>::iterator it;
    string s[][2] ={
    {"black","#ffffff"},
    {"white","#000000"},
    {"red","#ff0000"}
    };
    
    for(int i = 0;!s[i][0].empty();++i){
        m.insert(map<string,string>::value_type(s[i][0],s[i][1]));
    }
    
    for(it = m.begin();it!=m.end();++it)
        cout<<"m['"<< (*it).first<<"'] is " <<(*it).second<<endl;

    
    if((it = m.find("red"))!=m.end()){
        cout<<"blue'Find! It's value is "<< (*it).second << endl;
    }
    
    return 0;
}
