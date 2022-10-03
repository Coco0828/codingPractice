#include<stdio.h>
#include<stdlib.h>
struct dlinklist{
    struct dlinklist *left;
    int data;
    struct dlinklist *right;
};

typedef struct dlinklist node;
node *start = NULL;




int menu(){
    int number;
    printf("1. Create\n");
    printf("2. Insert a node at beginning\n");
    printf("3. Insert a node at end\n");
    printf("4. Insert a node at middle\n");
    printf("5. Delete a node from beginning\n");
    printf("6. Delete a node from end\n");
    printf("7. Delete a node from middle\n");
    printf("8. Traverse the list from Left to Right\n");
    printf("9. Traverse the list form Right to Left\n");
    printf("10. Count the Number of nodes in the list\n");
    printf("11. Exit\n");
    printf("Enter your choice:\n");
    scanf("%d",&number);
    return number;
}

node *getnode(){
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter Data: \n");
    scanf("%d",&newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}


void createlist(int n){
    int i;
    node *newnode, *temp;
    for(i = 0;i < n;i ++){
        newnode = getnode();
        if(start == NULL){
            start = newnode;
        }else{
            temp = start;
            while(temp->right){
                temp = temp->right;
            }
            temp->right = newnode;
            newnode->left = temp;
        }
    }
        
}

int countnode(node *start){
    if(start == NULL){
        return 0;
    }else{
        return 1+countnode(start->right);
    }
}
void dll_insert_beg(){
    node *newnode;
    newnode = getnode();
    if(start == NULL){
        start = newnode;
    }else{
        newnode->right = start;
        start->left = newnode;
        start = newnode;
    }
}

void dll_insert_end(){
    node *newnode, *temp;
    newnode = getnode();
    if(start == NULL){
        start = newnode;
    }else{
        temp = start;
        while(temp->right != NULL){
            temp = temp->right;
        }
        temp->right = newnode;
        newnode->left = temp;
    }
}

void dll_insert_mid(){
    node *newnode, *temp;
    int pos, nodectr, ctr = 1;
    newnode = getnode();
    printf("Enter the position:\n");
    scanf("%d",pos);
    nodectr = countnode(start);
    if(pos < nodectr && pos > 1){
        temp = start;
        while(ctr < pos-1){
            temp = temp->right;
            ctr ++;
        }
        newnode->left = temp;
        newnode->right = temp->right;
        temp->right = newnode;
        temp->right->left = newnode;
    }else{
        printf("Position %d of list is not a middle position",pos);
    }
}

void traverse_left_to_right(){
    node *temp;
    temp = start;
    printf("The contents of List:");
    if(start == NULL){
        printf("Empty List\n");
    }else{
        while(temp != NULL){
            printf("%d",temp->data);
            temp = temp->right;
        }
    }
}

void traverse_right_to_left(){
    node *temp;
    temp = start;
    printf("The contents of List:");
    if(start == NULL){
        printf("Empty List\n");
    }else{
    	while(temp->right != NULL){
            temp = temp->right;
        }
    }
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->left;
    }
}

void dll_delete_beg(){
    node *temp;
    if(start == NULL){
        printf("Empty List\n");
        return ;
    }else{
        temp = start;
        start = start->right;
        start->left = NULL;
        free(temp);
    }
}

void dll_delete_end(){
    node *temp;
    if(start == NULL){
        printf("Empty List\n");
        return ;
    }else{
        temp = start;
        while(temp->right!= NULL){
            temp = temp->right;
        }
        temp->left->right = NULL;
        free(temp);
        temp = NULL;
    }
}

void dll_delete_mid(){
    int i = 0,pos,nodectr;
    node *temp;
    if(start == NULL){
        printf("Empty List\n");
        return ;
    }else{
        printf("Enter the position of the node to delete: \n");
        scanf("%d",&pos);
        nodectr = countnode(start);
        if(pos > 1 && pos < nodectr){
            temp = start;
            i = 1;
            while(i < pos){
                temp = temp->right;
                i++;
            }
            temp->right->left = temp->left;
            temp->left->right = temp->right;
            free(temp);
            printf("node deleted\n");
        }else{
            printf("It is not a middle position\n");
        }
    }
}

int main(){
    int number, ch;
    while(1){
        number = menu();
        switch(number){
            case 1:
                printf("Enter Number of nodes to create:\n");
                scanf("%d",&number);
                createlist(number);
                break;
                
            case 2:
                dll_insert_beg();
                break;
                
            case 3:
                dll_insert_end();
                break;
                
            case 4:
                dll_insert_mid();
                break;
                
            case 5:
                dll_delete_beg();
                break;
                
            case 6: 
                dll_delete_end();
                break;
                
            case 7:
                dll_delete_mid();
                break;
                
            case 8:
                traverse_left_to_right();
                break;
                
            case 9:
                traverse_right_to_left();
                break;
                
            case 10:
                printf("Number of node: %d\n",countnode(start));
                break;
                
            case 11:
                exit(0);
                
        }
    }
    return 0;
}
