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
	
	if(S == 0) cout << "普通";
	else if(S == 1) cout << "吉";
	else if(S == 2) cout << "大吉";
	
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
		if(year[i] % 4 == 0 && year[i] % 100 != 0) cout << "閏年" << endl;
		else if(year[i] % 400 == 0) cout << "閏年" << endl;
		else cout << "平年" << endl;
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
			cout << "閏年\n";
		}
		else{
			cout << "平年\n";
		}
	}
	
	return 0;
}*/
