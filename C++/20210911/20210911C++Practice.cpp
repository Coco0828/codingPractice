/*#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char x[] = "Hello World";
    char y[25],z[25];
    // in c++ string copy strcpy(class[i].subject,zero);
    strncpy(z,x,1);
    cout << "the z array is:" << x << endl;
    return 0;
}*/

/*#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int a;
    int *aPtr;
    a = 7;
    aPtr = &a;
    
    cout << "a address:" << &a;
    cout << "\naPtr value:" << aPtr;
    cout << "\n\na value:" << a;
    cout << "\n*aPtr value:" << *aPtr;
    
    cout << "\n&*aPtr address:" << &*aPtr;
    cout << "\n*&aPtr address:" << *&aPtr<<endl;
    
    return 0;
}*/

#include<iostream>
using namespace std;

struct Time{
    int hour;
    int minute;
    int second;
};

void printStandard( const Time &t ); 
void printMilitary( const Time &t );

int main(){
    Time dinnerTime;
    dinnerTime.hour = 18;
    dinnerTime.minute = 30;
    dinnerTime.second = 0;
    cout << "The dinner will be :";
    printMilitary( dinnerTime );
    cout << "The dinner Standar will be :";
    printStandard( dinnerTime );
    
    return 0;
}

void printMilitary(const Time &t){
    cout<< (t.hour < 10? "0":"") << t.hour << ":"
        << (t.minute < 10?"0":"") << t.minute;
}

void printStandard( const Time &t ) { 
    cout << ((t.hour == 0 || t.hour == 12 ) ? 12 : t.hour % 12 ) << ":" << (t.minute < 10 ? "0" : "" ) << t.minute << ":" << (t.second < 10 ? "0" : "" ) << t.second << (t.hour < 12 ? "AM" : "PM" ) ; 
}

