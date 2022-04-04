#include <iostream>
using namespace std;

void scan(string s, int a[100]){
    int i = 100 - 1;
    int j = 0;
	int n = s.length();
    while(i >= n)a[i--] = 0;
    while(i >= 0)a[i--] = s[j++] - '0';
}

void print(int a[100]){
    int i = 100 - 1;
    while(i >= 0 && a[i] == 0)i--;
    if(i<0)
        cout << '0';
    else
        while(i >= 0)cout << a[i--];
}

int main(){
	string s;
	cin >> s;
	
	int a[100] = {0};
	
	scan(s, &a[100]);
	print(&a[100]);
}
