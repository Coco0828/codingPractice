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
    printf("\n 1.Create a list, 2. Print Middle Node, 3. Delete Middle Node, 4. Remove Duplicate: ");    
    scanf("%d",&ch);
    return ch;
}

node *getnode(){
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
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

int countnode(node *ptr){
    int count;
    while(ptr != NULL){
        count ++;
        ptr = ptr->next;
    }
    return count;
}

node* findMiddleNode(int n){
	node *temp;
	int i;
	if(start == NULL){
		printf("No nodes in the list");
	}else {
		for(i = 0; i < n/2; i ++){
			temp = temp->next;
		}
		if(n % 2 == 0){
			return temp -> next;
		}else{
			return temp;
		}
		
	}
}

node* deleteMiddleNode(){
    int ctr = 1, pos, nodectr;
    node *temp, *prev;
    if(start == NULL){
        printf("\n No nodes are exit");
    }else{
        nodectr = countnode(start);
        if(pos > 1 && pos < nodectr){
            temp = prev = start;
            while(ctr < pos){
                prev = temp;
                temp = temp->next;
                ctr++;
            }
            prev->next = temp->next;
            free(temp);
            printf("\n Node deleted");
        }
    }
}

node* removeDuplicate(){
	node *temp;
	if(start == NULL){
		printf("No nodes in the list\n");
	}else{
		if(temp == temp->next){
			free(temp);
			temp = temp->next;
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
            case 2:
            	node *mid;
                mid = findMiddleNode(n);
                printf("%d", mid->data);
                break;
            case 3:
                deleteMiddleNode();
                break;
            case 4:
                removeDuplicate();
                break;
            default:
                exit(0);
                
        }
        getchar();
    }
    return 0;
}

