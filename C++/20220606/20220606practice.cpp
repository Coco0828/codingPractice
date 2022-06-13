// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

int main () {
  string line;
  ifstream myfile ("grade.txt");
  if (myfile.is_open())
  {
    while (getline (myfile,line) )
    {
      //cout << line << '\n';
      	/*while(!line.empty()){
      		int string_temp_last = line.find(';');
   			string temp = line.substr(0, string_temp_last);
    		cout << temp;
    	//(*line).erase((*line).begin(), (*line).begin() + (*line).substr(0, string_temp_last).length() + 1);
	    	line.erase(0, (string_temp_last + 1));
		}*/
		int string_temp_last = line.find(';');
		string temp = line.substr(0, string_temp_last);
    	cout << temp << endl;
		line.erase(line.begin(), line.begin() + line.substr(0, string_temp_last).length() + 1);
		string_temp_last = line.find(';');
		temp = line.substr(0, string_temp_last);
		//cout << line << endl;
		cout << temp << endl; 
	}
    myfile.close();
  }

  else cout << "Unable to open file"; 
	
	cout << endl;
	
	
	//
	/*while (getline(, str))
	{
    	
	}*/
	
  return 0;
}
