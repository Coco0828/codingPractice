#include <iostream>
using namespace std;

class node{
	private:
    	int data;
    	node *next;
	public:
    	void push(int value);
    	void insert_node(node *ptr, int value);
    	void print();
    	node getnode();
};

// LinkedList摸
// ╬Τ摸﹚竡戈
// そ秨摸Τㄧ计
// 篶ㄧ计
// pushㄧ计
// printㄧ计

node node::getnode(){
    node *p;
    p = new node;
    if(p == NULL){
        cout << "memory not enough" << endl;
        exit(1);
    }
    return (p);
}

void node::push(int value){
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


void node::insert_node(node *ptr, int value){
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

void node::print(){
    node *q = head;
    while(q!=NULL){
        cout << q->data << " ";
        q = q->next;
    }
    cout << endl;
}

int main(){
    node myLinkedList;
    myLinkedList.push(10);
    myLinkedList.push(20);
    myLinkedList.push(30);
    myLinkedList.print();
    return 0;
}
