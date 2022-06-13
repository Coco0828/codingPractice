#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int k = 0, a = 0, d = 0, t = 0;
	
	while(N){		
		char s[20];
		scanf("%s", s); 
		
		char ks[] = "Get_Kill";
		char as[] = "Get_Assist";
		char ds[] = "Die";
		
		if(strcmp(s, ks) == 0){
            t ++;
            k ++;

        	switch(t){
                case 1:
                    cout << "You have slain an enemie." << endl;
                    break;
                case 2:
                    cout << "You have slain an enemie." << endl;
                	break;
                case 3:
                	cout << "KILLING SPREE!" << endl;
                    break;
            	case 4:
                	cout << "RAMPAGE~" << endl;
                    break;
                case 5:
                    cout << "UNSTOPPABLE!" << endl;
                    break;
                case 6:
                    cout << "DOMINATING!" << endl;
                    break;
                case 7:
                    cout << "GUALIKE!" << endl; 
                    break;
                default :
                	cout << "LEGENDARY!" << endl;
                    break;
        	}
        } else if(strcmp(s, as) == 0){
        	a ++;
		} else if(strcmp(s, ds) == 0){
			d ++;
			if(t < 3) cout << "You have been slained." << endl;
			else cout << "SHUTDOWN." << endl;
			t = 0;
		}
		
		N --;
	}
	
	cout << k << "/" << d << "/" << a;
	
	return 0;
}
