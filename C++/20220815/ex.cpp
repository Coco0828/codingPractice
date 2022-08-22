#include <iostream>
using namespace std;

class LinkedList;

class ListNode{
	private:
    	int data;
    	ListNode *next;
	public:
    	ListNode():data(0),next(0){};
    	ListNode(int a):data(a),next(0){};

    	friend class LinkedList;
};

class LinkedList{
	private:
	    ListNode *first;            // list的第一個node
	public:
    	LinkedList():first(0){};
	   	void PrintList();           // 印出list的所有資料
    	void Push_back(int x);      // 在list的尾巴新增node  	
};

void LinkedList::Push_back(int x){

    ListNode *newNode = new ListNode(x);   // 配置新的記憶體

    if (first == 0) {                      // 若list沒有node, 令newNode為first
        first = newNode;
        return;
    }

    ListNode *current = first;
    while (current->next != 0) {           // Traversal
        current = current->next;
    }
    current->next = newNode;               // 將newNode接在list的尾巴
}

void LinkedList::PrintList(){

    if (first == 0) {                      // 如果first node指向NULL, 表示list沒有資料
        cout << "List is empty.\n";
        return;
    }

    ListNode *current = first;             // 用pointer *current在list中移動
    while (current != 0) {                 // Traversal
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {

    LinkedList list;
    list.Push_back(10);
    list.Push_back(20);
    list.Push_back(30);
    list.PrintList();

    return 0;
}
