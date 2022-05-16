#include <iostream>
using namespace std;

int main()
{

int na[25];
int nb[25];
int sum[25];
int i;
int start = 0;

string a;
string b;

cin >> a;
cin >> b;

for(i=0;i<25;i++){
    na[i]=0;
    nb[i]=0;
    sum[i]=0;
}

string a_reverse = a;
for(i=0;i<a.length()/2;i++){
    swap(a_reverse[i], a_reverse[a.length()-1-i]);
}

for(i=0;i<a.length();i++){
    na[i]=a_reverse[i]-'0';
}

string b_reverse = b;
for(i=0;i<b.length()/2;i++){
    swap(b_reverse[i], b_reverse[b.length()-1-i]);
}

for(i=0;i<b.length();i++){
    nb[i]=b_reverse[i]-'0';
}

int carry = 0;
for(i = 0;i < 25;i ++){
    sum[i]=na[i]+nb[i]+carry;
    if(sum[i]>=10){
        sum[i]-=10;
        carry = 1;
    }else{
        carry = 0;
    }
}

for(i = 24;i>=0;i --){
    if(sum[i]!=0){
        start = i;
        break;
    }
}

for(i = start;i >=0; i ++){
    cout << sum[i];
}
}
