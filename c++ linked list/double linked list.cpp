struct dlinklist{
    struct dlinklist *left;
    int data;
    struct dlinklist *right;
};

typedef struct dlinklist node;
node *start = NULL;
int countnode(node *start){
    if(start == NULL)
        return 0;
    else
        return 1 + countnode(start->right);
}

node *getnode(){
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\Enter data: ");
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
        if(start = NULL){
            start = newnode;
        }else{
            temp = start;
            while(temp->right)
                temp = temp->right;
            temp->right = newnode;
            newnode->left = temp;
        }
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
        while(temp->right!=NULL)
            temp = temp->right;
        temp->right = newnode;
        newnode->left = temp;
    }
}

void dll_insert_mid(){
    node *newnode, *temp;
    int pos, nodectr, ctr = 1;
    newnode = getnode();
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    nodectr = countnode(start);
    if(pos-nodectr >= 2){
        printf("\nOut of range");
        return ;
    }
    if(pos > 1 && pos < nodectr){
        temp = start;
        while(ctr < pos-1){
            temp = temp->right;
            ctr ++;
        }
        newnode->left = temp;
        newnode->right = temp->right;
        temp->right->left = newnode;
        temp->right = newnode;    
    }else{
        printf("\nposition %d of list is not a middle position ",pos);
    }
}

void dll_delete_beg(){
    node *temp;
    if(start == NULL){
        printf("\nEmpty List");
        return ;
    }else{
        temp = start;
        start = start->right;
        start->left = null;
        free(temp);
    }
}

void dll_delete_end(){
    node *temp;
    if(start == NULL){
        printf("\nEmpty List");
        return ;
    }else{
        temp = start;
        while(temp->right != null)
            temp=temp->right;
        temp->left->right = NULL;
        free(temp);
        temp = NULL;
    }
}

