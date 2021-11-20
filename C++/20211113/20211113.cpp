#include<iostream>
using namespace std;

int main(){
    int *ptr = new int(100);
    cout<<"adress:"<< ptr<< endl;
    cout<<"value:"<< *ptr<< endl;
    
    *ptr = 200;
    cout<<"adress:"<< ptr<< endl;
    cout<<"value:"<< *ptr<< endl;
    return 0;
}

