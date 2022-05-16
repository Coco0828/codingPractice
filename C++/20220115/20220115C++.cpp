#include <iostream>
using namespace std;

class node{
    public:
    	int data;
    	node *next;
	    friend class Queue;
};

class Queue{
    node *front;
    node *rear;
	public:
    	Queue();
    	int enqueue(int value);
    	int dequeue();
    	void print(node head);
};


Queue::Queue(){
    front = NULL;
    rear = NULL;
}

int Queue::enqueue(int value){
    node *new_node = new node;
    if(new_node == NULL){
        cout << "記憶體配置失敗";
        exit(1);
    }
    new_node->data = value;
    new_node->next = NULL;

    if(rear == NULL){
        front = new_node;
    }else{
        rear->next = new_node;
    }
    rear = new_node;
    return 1;
}

int Queue::dequeue(){
    node *top;
    int temp;
    
    if(front != NULL){
        top = front;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        temp = top->data;
        return temp;
    }else{
        return -1;
    }   
}

void Queue::print(node head)
{
    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(25);
    q.print(q);
    q.dequeue();
    q.print(q);
    return 0;
}

