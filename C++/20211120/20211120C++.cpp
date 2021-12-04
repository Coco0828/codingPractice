#include <stdio.h>
#include <stdlib.h>

struct slinklist{
    int data;
    struct slinklist *next;
};

typedef struct slinklist node;

node *start = NULL;

void createList();
void insert_at_mid();
void delete_at_mid();
int countnode(node *st);
void print();

int main(){
	char input;
	
	while(input != 'e'){
		printf("i- insert, d- delete, e- print then exit: ");
		scanf("%c", input);
		if(input == 'i') insert_at_mid();
		else if(input == 'd') delete_at_mid();
	}
	
	print();
	
	return 0;
}

node *getnode(){
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("Please input a value:");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}

void createlist(int n){
    node *newnode;
    node *temp;
    for(int i = 0;i < n;i ++){
        newnode = getnode();
        if(start == NULL){
            start = newnode;
        }else{
            temp = start;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
   
}

void insert_at_mid(){
    node *newnode, *temp, *prev;
    int pos, nodectr,ctr = 1;
    newnode = getnode();
    printf("\nEnter the position:");
    scanf("%d",&pos);
    nodectr = countnode(start);
    if(pos > 1 && pos < nodectr){
        temp = prev = start;
        while(ctr < pos){
            prev = temp;
            temp = temp->next;
            ctr++;
        }
        prev->next = newnode;
        newnode->next = temp;
    }
    else
        printf("position %d is not a middle position",pos);
}

int countnode(node *st){
    if(st == NULL)
        return 0;
    else
        return(1 + countnode(st->next));
}

void print(){
    node *q = start;
    while(q != NULL){
    	printf("%d ", q->data);
        q = q->next;
    }
}

void delete_at_mid(){
    int ctr = 1, pos, nodectr;
    node *temp, *prev;
    if(start == NULL){
        printf("Emply List");
        return ;
    }else{
        printf("\n Enter position of node to delete:");
        scanf("%d",&pos);
        nodectr = countnode(start);
        if(pos > nodectr){
            printf("\nThis node doesnot exist");
        }
        if(pos > 1 && pos < nodectr){
            temp = prev = start;
            while(ctr < pos){
                prev = temp;
                temp = temp->next;
                ctr++;
            }
            prev->next = temp->next;
            free(temp);
            printf("\nNode deleted");
        }else{
            printf("\n Invalid positioin");
            getnode();
        }
    }
    
}
