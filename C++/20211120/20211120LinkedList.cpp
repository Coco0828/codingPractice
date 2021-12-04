#include <iostream>
using namespace std;

void insertNode();
void deleteNode();
void findNode();
void printNode();

class node{
	int data;
    node *next;
};

class LinkedList{
    node *head;
    node *tail;
    node *newNode;
    newNode->data = 10;
    newNode->next = NULL;
    head->next = newNode;
    tail->next = newNode;
}

int main(){
	char input;
	cout << "i:插入\nd:刪除\nf:尋找\nl:列印\ne:離開\n>";
	
	while(input != "e"){
		cin >> input;
		if(input == "i") insertNode();
		else if(input == "d") deleteNode();
		else if(input == "f") findNode();
		else if(input == "l") printNode();
	}
}

void insertNode(){
	head->NULL;
	tail->NULL;
	int value;
	cout << "輸入插入資料內容: ";
	cin >> value;
}
