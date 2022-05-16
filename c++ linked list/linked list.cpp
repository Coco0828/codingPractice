#include<stdio.h>
#include<stdlib.h>

struct slinklist{
    int data;
    struct slinklist *next;
};

typedef struct slinklist node;

node *start = NULL;


int menu(){
    int ch;
    clrscr();
    printf("\n 1.Create a list");
    printf("\n ====================");
    
    scanf("%d",&ch);
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


void insert_at_beg(){
    node *newnode;
    newnode = getnode();
    if(start == NULL){
        start = newnode;
    }else{
        newnode->next = start;
        start = newnode;
    }
}

void insert_at_mid(){
    node *newnode, *temp, *prev;
    int pos,nodectr,ctr = 1;
    newnode = getnode();
    printf("\n Enter the position: ");
    scanf("%d", &pos);
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
    }else{
        printf("position %d is invalid",pos);
    }
}

void insert_at_end(){
    node *newnode, *temp;
    newnode = getnode();
    if(start = NULL){
        start = newnode;
    }else{
        temp = start;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void delete_at_beg(){
    node *temp;
    if(start = NULL){
        printf("\n No nodes are exit");
        return;
    }else{
        temp = start;
        start = temp->next;
        free(temp);
        printf("\n Node deleted");
    }
}

void delete_at_mid(){
    int ctr = 1, pos, nodectr;
    node *temp, *prev;
    if(start == NULL){
        printf("\n No nodes are exit");
        return;
    }else{
        printf("\n Enter position of node to delete: ");
        scanf("%d",&pos);
        nodectr = countnode(start);
        if(pos > 1 && pos < nodectr){
            temp = prev = start;
            while(ctr < pos){
                prev = temp;
                temp = temp->nect;
                ctr++;
            }
            prev->next = temp->next;
            free(temp);
            printf("\n Node deleted");
        }else{
            printf("\n Invalid position");
        }
    }
}

void delete_at_end(){
    node *temp, *prev;
    if(start == NULL){
        printf("\n No nodes are exit");
        return;
    }else{
        temp = prev = start;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("\n Node deleted ");
    }
}

void traverse(){
    node *temp;
    temp = start;
    printf("\n Print the contents from (left->right): ");
    if(start == NULL){
        printf("\nEmpty list");
        return ;
    }else{
        while(temp != NULL){
            printf("%d -->",temp->data);
            temp = temp->next;
        }
    }
    printf("\nTraverse complete");
}

void rev_traverse(node *start){
    if(start == NULL){
        printf("\nEmpty list");
        return ;
    }else{
        rev_traverse(start->next);
        printf("%d -->",start->data);
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
                    creatlist(n);
                    printf("\n List created");
                }else{
                    printf("\n List already created");
                }
                break;
            case 2:
                insert_at_beg();
                break;
            case 3:
                insert_at_mid();
                break;
            case 4:
                insert_at_end();
                break;
            case 5:
                delete_at_beg();
                break;
            case 6:
                delete_at_mid();
                break;
            case 7:
                delete_at_end();
                break;
            case 8:
                traverse();
                break;
            case 9:
                printf("\n Print the contents from (right->left): ");
                rev_traverse();
                break;
            case 10:
                printf("\n Node count %d",countnode(start));
                break;
            case 11:
                exit(0);
            default:
                exit(0);
                
        }
        getch();
        
        
    }
    return 0;
}

