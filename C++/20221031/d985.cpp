#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	for(int i = 1; i <= N; i ++){
		int M;
		cin >> M;
		int Mtemp = M;
		vector<int> min;
		vector<int> sec;
		vector<int> sum;
		
		while(M){
			int a, b;
			cin >> a >> b;
			min.push_back(a);
			sec.push_back(b);
			sum.push_back(a * 60 + b);
			M --;
		}
		
		cout << "Track " << i << ":" << endl;
		
		int max = 999, k;
		for(int i = 0; i < Mtemp; i ++){
			if(sum[i] < max){
				max = sum[i];
				k = i;
			}
		}
		
		cout << "Best Lap: " << min[k] << " minute(s) " << sec[k] << " second(s)." << endl;
		
		int s = 0;
		for(int i = 0; i < Mtemp; i ++) s += sum[i];
		int avg = s / Mtemp;
		int avgmin;
		if(avg < 3600) avgmin = avg / 60;
		else avgmin = 60;
		int avgsec = avg - 60 * avgmin;
		cout << "Average: " << avgmin << " minute(s) " << avgsec << " second(s).\n" << endl;
	}
	
	return 0;
}
