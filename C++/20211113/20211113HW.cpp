/*#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	cin >> input;
	
	cout << "hello " << input;
	
	return 0;
}*/

/*#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	int answer = a + b;
	
	cout << answer;
	
	return 0;
}*/

/*#include <iostream>
using namespace std;

int main(){
	int M,D;
	
	scanf("%d %d", &M, &D);
	
	int S;
	
	S = (M * 2 + D) % 3;
	
	if(S == 0) cout << "���q";
	else if(S == 1) cout << "�N";
	else if(S == 2) cout << "�j�N";
	
	return 0;
}*/ 

/*#include <iostream>
using namespace std;

int main(){
	int year[2];
	cin >> year[0];
	cin >> year[1];
	
	int i;
	
	for(i = 0; i < 2; i ++){
		if(year[i] % 4 == 0 && year[i] % 100 != 0) cout << "�|�~" << endl;
		else if(year[i] % 400 == 0) cout << "�|�~" << endl;
		else cout << "���~" << endl;
	}
	
	return 0;
}*/

#include <iostream>
using namespace std;

int main(){
	int t;
	int a, b, c, d, e;
	
	while(cin >> t){
		while(t-->=1){
			scanf("%d %d %d %d", &a, &b, &c, &d);
			if((b-a) == (c-b)) e = d + (b-a);
			else if((b/a) == (c/b)) e = d * (b/a);
			printf("%d %d %d %d %d", a, b, c, d, e);
		}
	}
	
	return 0;
}

/*#include <iostream>
using namespace std;

int main(){
	int year;
	while(cin >> year){
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			cout << "�|�~\n";
		}
		else{
			cout << "���~\n";
		}
	}
	
	return 0;
}*/
