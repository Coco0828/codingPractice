/*#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
      cout << "Hello world!" << endl;
      return 0;
}



int main(){
	int i, dice;
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0;
	
	for(i = 0; i < 6000; i ++){
		dice = 1 + rand() % 6;
		
		if(dice == 1)a += 1;
		else if(dice == 2)b += 1;
		else if(dice == 3)c += 1;
		else if(dice == 4)d += 1;
		else if(dice == 5)e += 1;
		else if(dice == 6)f += 1;
	}
	
	cout << "1: " << a << endl;
	cout << "2: " << b << endl;
	cout << "3: " << c << endl;
	cout << "4: " << d << endl;
	cout << "5: " << e << endl;
	cout << "6: " << f;
	
	
	return 0;
}*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int answer[6]; 
    
    unsigned seed;
    cout << "Plz input seed:";
    cin >> seed;
    srand(seed);
    
    
    for(int i = 0;i < 6000;i ++)
        answer[(rand() % 6)]++;

    for(int i = 0;i < 6;i ++)
        cout << answer[i] << endl;
}
