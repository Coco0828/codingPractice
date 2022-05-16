#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int B_Search(vector<int> array,int key){
        int mid = array.size() / 2;
        if(key == array[mid]) return mid;
        else if(key < array[mid]){
        	
		} else {
			
		}
    }
};

void traverse(vector<int> input){
    vector<int>::iterator it;
    for (it = input.begin(); it != input.end(); ++it)
        cout << *it << " ";
}

int main()
{
    Solution sol;
    int array[6] = {1,4,6,8,9,10};
    int key = 8;
    vector<int> input(array, array);
    traverse(input);

    return 0;
}
