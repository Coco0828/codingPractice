#include <iostream>
#include <vector>
using namespace std;

int main(){
	/*int b = 1;
	int c = b<<1;
	
	cout << c;*/
	
	/*int a[3] = {1,3,2};
	sort(a, a+3);
	for(int i = 0;i < 3;i ++)
    	cout << a[i] <<endl;*/
    	
    /*int a[7] = {8,1,3,2,5,1,4};
    vector<int> v(a,a+7);
    vector<int>::iterator it;
    for(it = v.begin();it!=v.end();it++)
        cout << *it << "";
    cout << endl;*/
    
    int n, t = 1;
    int a[50];
    int sum, average, ans, i;
    
    while(cin >> n){
    	sum = 0;
    	ans = 0;
    	for(i = 0; i < n; i ++) cin >> a[i];
    	vector<int> input(a, a+n);
    	vector<int>::iterator it;
    	for(it = input.begin(); it != input.end(); it ++) sum += *it;
    	average = sum / n;
    	for(it = input.begin(); it != input.end(); it ++){
    		if(*it > average) ans += (*it - average);
		}
		cout << "Set #" << t++ << '\n' << "The minimum number of moves is " << ans << "." << '\n' << endl;
		
	}

	return 0;
}
