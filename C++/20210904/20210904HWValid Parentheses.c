#include <stdio.h>

int main(){
	char s[104];
	scanf("s = %s", &s);
	int i, j, k = 0;
	
	for(i = 0; i < 104; i ++){
		if(s[i] == "("){
			for(j = i + 1; j < 104; j ++){
				if(s[j] == ")"){
					s[i] == '0';
					s[j] == '0';
				}
			}
		}
		
		else if(s[i] == "["){
			for(j = i + 1; j < 104; j ++){
				if(s[j] == "]"){
					s[i] == '0';
					s[j] == '0';
				};
			}
		}
		
		else if(s[i] == "{"){
			for(j = i + 1; j < 104; j ++){
				if(s[j] == "}"){
					s[i] == '0';
					s[j] == '0';
				}
			}
		}
	}
	
	for(i = 0; i < 104; i++){
		if(s[i] == "(" || s[i] == ")" || s[i] == "[" || s[i] == "]" || s[i] == "{" || s[i] == "}"){
			k = 1;
			break;
		}
	}
	(k == 1)?printf("false"):printf("true");
	
	return 0;
}
