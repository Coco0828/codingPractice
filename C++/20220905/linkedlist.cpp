#include<stdio.h>
#include<stdlib.h>

struct singleLinkedList{
     int data;
    struct singleLinkedList *next;
};

typedef struct singleLinkedList node;
node *start = NULL;

int menu(){
    int number;
    printf("1. Create List\n");
    printf("2. Insert at begining\n");
    printf("3. Insert at end\n");
    printf("4. Insert at middle\n");
    printf("5. Delete from begining\n");
    printf("6. Delete from end\n");
    printf("7. Delete from middle\n");
    printf("8. Traverse (Left to Right)\n");
    printf("9. Traverse (Right to Left)\n");
    printf("10. Count Node\n");
    printf("11. Exit\n");
    scanf("%d",&number);
    return number;
}

node* getnode(){
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
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
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

int countnode(node *ptr){
    if(ptr == NULL){
        return 0;
    }else{
        return 1 + countnode(ptr->next);
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

void insert_at_end(){
    node *newnode, *temp;
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

void insert_at_mid(){
    node *newnode, *temp, *prev;
    int pos, nodectr, ctr = 1;
    newnode = getnode();
    printf("Enter the position:\n");
    scanf("%d",&pos);
    nodectr = countnode(start);
    if(pos > 1 && pos < nodectr){
        temp = prev = start;
        while(ctr < pos){
            prev = temp;
            temp = temp->next;
            ctr ++;
        }
        prev->next = newnode;
        newnode->next = temp;
        printf("insert position %d success\n",pos);
    }else{
        printf("position %d is not a middle position",pos);
    }
    
}

void traverse(){
    node *temp;
    temp = start;
    printf("The contents of List(Left to Right):\n");
    if(start == NULL){
        printf("Empty List\n");
        return;
    }else{
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
    printf(".");
}

void rev_traverse(node *start){
    if(start == NULL){
        return;
    }else{
        rev_traverse(start->next);
        printf("%d ",start->data);
    }
}

void delete_at_beg(){
    node *temp;
    if(start == NULL){
        printf("No nodes are exist..\n");
        return ;
    }else{
        temp = start;
        start = temp->next;
        free(temp);
        printf("Node deleted\n");
    }
}

void delete_at_last(){
    node *temp, *prev;
    if(start == NULL){
        printf("No nodes are exit..\n");
        return ;
    }else{
        temp = prev = start;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("Node deleted\n");
    }
}

void delete_at_mid(){
    int ctr = 1, pos, nodectr;
    node *temp, *prev;
    if(start == NULL){
        printf("Empty List..\n");
        return;
    }else{
        printf("Enter position of node to delete: \n");
        scanf("%d",&pos);
        nodectr = countnode(start);
        if(pos > nodectr){
            printf("This node does not exit\n");
        }
        if(pos > 1 && pos < nodectr){
            temp = prev = start;
            while(ctr < pos){
                prev = temp;
                temp = temp->next;
                ctr ++;
            }
            prev->next = temp->next;
            free(temp);
            printf("Node deleted..\n");
        }else{
            printf("Invalid position..\n");
        }
    }
}

int main(){
    int number,n;
    while(1){
        number = menu();
        switch(number){
            case 1:// Create LinkedList
                if(start == NULL){
                    printf("\nNumber of nodes you want to create:");
                    scanf("%d",&n);
                    createlist(n);
                    printf("List created..\n");
                }else{
                    printf("List is already created...");
                }
                break;
                
            case 2:
                insert_at_beg();
                break;
            case 3:
                insert_at_end();
                break;
            case 4:
                insert_at_mid();
                break;
            case 5: 
                delete_at_beg();
                break;
            case 6:
                delete_at_last();
                break;
            case 7: 
                delete_at_mid();
                break;
            case 8: // Traverse (Left to Right)
                traverse();
                break;
            case 9: // Traverse (Right to Left)
                rev_traverse(start);
                break;
            case 10: // Count Node
                printf("Number of nodes: %d\n",countnode(start));
                break;
            case 11: // Exit
                exit(0);
                break;
        }
    }
}
