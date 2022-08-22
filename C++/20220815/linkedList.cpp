#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x):value(x),next(NULL){}
};

/*void traverseNode(ListNode* head){
	ListNode *a = head;
    while(a != NULL){
    	cout << a->val << " ";
    	a = a->next;
	}
}*/


/*int main(){
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    
    traverseNode(node1);
    return 0;
}*/

node *LinkedList::getnode(){
    node *p;
    p = new node;
    if(p == NULL){
        cout << "memory not enough" << endl;
        exit(1);
    }
    return (p);
}

void LinkedList::insert(int value){
    if(head == NULL){
        head = getnode();
        head->data = value;
        head->next = NULL;
        tail = head;
    }else{
        insert_node(tail,value);
    }
    cout << "Insert Successful!" << endl;
}


void LinkedList::insert_node(Node *ptr, int value){
    Node *new_node = getnode();
    new_node->data = value;
    new_node->next = NULL;
    
    if(ptr == NULL){
        new_node->next = head;
        head = new_node;
    }else if(ptr == tail){
        ptr->next = new_node;
        tail = tail->next;
    }else{
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

int main(){
	
	
	
	return 0;
}
