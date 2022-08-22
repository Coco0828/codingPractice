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
	    ListNode *first;            // list���Ĥ@��node
	public:
    	LinkedList():first(0){};
	   	void PrintList();           // �L�Xlist���Ҧ����
    	void Push_back(int x);      // �blist�����ڷs�Wnode  	
};

void LinkedList::Push_back(int x){

    ListNode *newNode = new ListNode(x);   // �t�m�s���O����

    if (first == 0) {                      // �Ylist�S��node, �OnewNode��first
        first = newNode;
        return;
    }

    ListNode *current = first;
    while (current->next != 0) {           // Traversal
        current = current->next;
    }
    current->next = newNode;               // �NnewNode���blist������
}

void LinkedList::PrintList(){

    if (first == 0) {                      // �p�Gfirst node���VNULL, ���list�S�����
        cout << "List is empty.\n";
        return;
    }

    ListNode *current = first;             // ��pointer *current�blist������
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
