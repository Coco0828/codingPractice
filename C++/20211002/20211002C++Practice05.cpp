/*#include <iostream>
using namespace std;

class rec{
	int r1 = 200;
	int r2 = 50;
	int area;
	public:
		rec(int a, int b);
		void show();
};

rec::rec(int a, int b){area = a*b;}
void rec::show(){cout << area;}

int main(){
	int len, wid, ans;
	
	cout << "please input length: ";
	cin >> len;
	cout << "please input width: ";
	cin >> wid;
	
	rec rectangle;
	
	rectangle.show();
	
	return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int *ptr = new int(100);
    cout << "space address: "<< ptr << endl;
    cout << "space value: " << *ptr << endl;
    
    *ptr = 200;
    cout << "space address: "<< ptr << endl;
    cout << "space vlaue: "<<*ptr << endl;
    
    delete ptr;
    
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int size = 0;
    cout << "plz input size:";
    cin >> size;
    int i;

    int *arr = new int(size);
    for(int i = 0;i < size;i ++){
        cout << "arr[" << i << "] = ";
        cin >> *(arr+i);
    }
    cout << "print array:";
    for(i = 0;i < size;i ++){
        cout << "arr[" << i << "] = "<<*(arr+i)<<endl;  
    }
    delete []arr;
    
    return 0;
}*/

/*#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main(){
	int a = 2;
	int b = 1;
	
	cout << "original a: " << a << endl;
	cout << "original b: " << b << endl;
	
	swap(&a, &b);
	
	cout << "new a: " << a << endl;
	cout << "new b: " << b;
	
	return 0;
}
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}*/

#include<iostream>
using namespace std;

union Demo{
    int member1;
    float member2;
    char* member3;
};

int main(){
    Demo d;
    d.member1 = 1;
    d.member2 = 2.0;
    d.member3 = "3";
    
    cout << "member1: "<< d.member1 << endl;
    cout << "member2: "<< d.member2 << endl;
    cout << "member3: "<< d.member3 << endl;
    return 0;
}
