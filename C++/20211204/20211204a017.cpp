#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

int calculate(int, int);

string s;
int main(){
  	while(getline(cin,s)){
    	int result=calculate(0,s.length());
    	cout << result<<endl; 
  	} 
}
int calculate(int l,int r){
  	int c=0;
  	for(int i = r - 1;i >= l;i--){
   		if (s[i]==')') c++;   
    	if (s[i]=='(') c--;
    	if (s[i]=='+' && c==0){ 
    	return calculate(l,i)+calculate(i+1,r);
    	}
    	if (s[i]=='-' && c==0){
    		return calculate(l,i)-calculate(i+1,r);
    	}  
  	}    
  	for(int i = r - 1;i >= l;i--){ 
    	if (s[i]==')') c++;      
    	if (s[i]=='(') c--;
    	if (s[i]=='*' && c==0){
      		return calculate(l,i)*calculate(i+1,r);
    	}
    	if (s[i]=='/' && c==0){
      		return calculate(l,i)/calculate(i+1,r);
    	}
    	if (s[i]=='%' && c==0){
      		return calculate(l,i)%calculate(i+1,r);
    	}         
  	}    
  	if ((s[l]=='(')&&(s[r-1]==')')) return calculate(l+1,r-1); 
  	if (s[l]==' ' &&s[r-1]==' ') return calculate(l+1,r-1);  
  	if (s[l]==' ') return calculate(l+1,r); 
  	if (s[r-1]==' ') return calculate(l,r-1); 
  	int num=0;
  	if (isdigit(s[l]) && isdigit(s[r-1])){ 
    	for(int i = l;i < r;i++) num=num*10+s[i]-'0';
    	return num;
  	}
}

