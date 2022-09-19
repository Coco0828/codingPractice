#include <iostream>
#include <stdlib.h>
using namespace std;

struct dlinklist{
    struct dlinklist *left;
    int data;
    struct dlinklist *right;
};
typedef struct dlinklist node;
node *start = NULL; 

node *getnode(){
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("\nEnter Data:");
    scanf("%d",&newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void createlist(int n){
    int i;
    node *newnode;
    node *temp;
    for(i = 0;i < n;i ++){
        newnode = getnode();
        if(start == NULL){
            start = newnode;
        }else{
            temp = start;
            while(temp->right != NULL){
                temp = temp->right;
            }
            //while complete execution tempnode equal endnode
            temp->right = newnode;
            newnode->left = temp;
        }
    }
}

void print(){
	node *temp = start;
	while(temp != NULL){
    	cout << temp->data;
    	temp = temp->right;
	}
}

void righttoleft(){
	node *temp = start;
	while(temp->right!= NULL){
    	temp = temp->right;
	}
	while(temp!= NULL){
    	cout << temp->data;
    	temp = temp->left;
	}
	
}

int countnode(node *start){
    if(start == NULL){
        return 0;
    }else{
        return 1+countnode(start->right);
    }
}

int main(){
	createlist(5);
	print();
	righttoleft();
	
	cout << countnode(start);
	
	return 0;
}
