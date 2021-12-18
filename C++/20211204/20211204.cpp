#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct slinklist{
    int data;
    struct slinklist *next;
};

typedef struct slinklist node;

node *start = NULL;

int menu(){
    int ch;
    
    printf("\n 1.Create a list");
    printf("\n ====================");
    
    
    return ch;
}


node *getnode(){
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}

int countnode(node *ptr){
    int count;
    while(ptr != NULL){
        count ++;
        ptr = ptr->next;
    }
    return count;
}

void createlist(int n){
    node *newnode;
    node *temp;
    for(int i = 0;i < n;i ++){
        newnode = getnode();
        if(start = NULL){
            start = newnode;
        }else{
            temp = start;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}

int main(){
    int ch, n;
    while(1){
        ch = menu();
        switch(ch){
            case 1:
                if(start == NULL){
                    printf("\n Numbers of nodes you want to create: ");
                    scanf("%d",&n);
                    createlist(n);
                    printf("\n List created");
                }else{
                    printf("\n List already created");
                }
                break;
        }
        
    }
    return 0;
}

