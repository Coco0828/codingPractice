#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

/*bool mygreater(int x,int y){
    return x>y;
}

int main(){
    int a[7] = {3,2,5,1,2,1,8};
    int b[4] = {1,7,4,9};
    
    vector <int> v1(a,a+7);
    vector <int> v2(b,b+4);
    vector <int> v3(v1.size() + v2.size());
    
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    
    for(int i = 0;i < v3.size() ;i ++)
        cout << v3[i] << "";
    
    
    sort(v3.begin(),v3.end(), mygreater);
    
    for(int i = 0;i < v3.size() ;i ++)
        cout << v3[i] << "";
    
    return 0;
}*/


/*void print(int& x){
    cout << x <<  " ";
}

void add(int &x){
    x = x+5;
}

int main(){
    list<int> L;
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    for_each(L.begin(),L.end(),print);
    cout << endl;
    for_each(L.begin(),L.end(),add);
    for_each(L.begin(),L.end(),print);
    cout << endl;
    return 0;
}*/

/*void print(int& x){
    cout << x <<  " ";
}

int add(int x){
    return x+5;
}

int main(){
    list<int> L;
    vector <int> v(3);
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    transform(L.begin(),L.end(),v.begin(),add);
    for_each(L.begin(),L.end(),print);
    cout << endl;
    for_each(v.begin(),v.end(),print);
    cout << endl;
    return 0;
}*/

void print(int& x){
    cout << x <<  "pi ";
}

int area(int x){
    return x*x;
}
int len(int x){
    return x*2;
}

int main(){
	list<int> r;
	r.push_back(10);
	r.push_back(20);
	r.push_back(30);
	
	vector<int> a(3);
	vector<int> b(3);
	vector<int> c(a.size() + b.size());
	
	/*for_each(r.begin(),r.end(),print);
	cout << r.size();
	cout << endl; */
	transform(r.begin(),r.end(),a.begin(),area);
	for_each(a.begin(),a.end(),print);
	cout << endl;
	transform(r.begin(),r.end(),b.begin(),len);
	for_each(b.begin(),b.end(),print);
	cout << endl;
	merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
	for_each(c.begin(),c.end(),print);
	
	return 0;
}
