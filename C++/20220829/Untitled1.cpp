int countnode(node *ptr){
	node *temp;
	temp = ptr;
	
	int count = 1;
	while(temp->next != NULL){
		temp = temp->next;
		count ++;
	}
	
	return count;
}


void traverse(node *head){
	node *temp;
	temp = head;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	
	cout << temp->data;
}

void traverse(node * ptr){
    if(ptr == NULL){
        return;
    }else{
        traverse(ptr->next);
		cout << ptr->data;    
	}
}
traverse(head);
