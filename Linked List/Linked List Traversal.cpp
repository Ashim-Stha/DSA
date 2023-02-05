#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

//for traversal display
void linkedListTraversal(struct Node *ptr){
	while(ptr!=NULL){
	printf("element: %d\n",ptr->data);
	printf("address: %d\n",ptr);
	ptr=ptr->next;
}
}

//to insert at first
struct Node * insertAtFirst(struct Node *head,int data){
   struct Node *p=(struct Node *)malloc(sizeof(struct Node));
   p->data=data;
   p->next=head;
   return p;
}

//to insert at given index
struct Node * insertAtIndex(struct Node *head,int data,int index){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
	int i =0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	ptr->data=data;
	
	return head;
	
}

//to insert at end
struct Node * insertAtEnd(struct Node *head,int data){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
    ptr->data=data;
    
	return head;	
}

struct Node * insertAfterNode(struct Node* node,struct Node* head,int data){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p=node;
	ptr->next=p->next;
	p->next=ptr;
	ptr->data=data;
	
	return head;
}
int main(){
	struct Node *head;
	struct Node *first;
	struct Node *second;
	
	//allocate memory for nodes in the linked list in a heap
	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	
	//link head and first nodes
	head->data=7;
	head->next=first;
	printf("head: %d\n",head);
	printf("head->data: %d\n",head->data);
	printf("head->next: %d\n",head->next);
	printf("\n");
	
	//link first and second nodes
	first->data=11;
	first->next=second;
	printf("first: %d\n",first);
	printf("first->data: %d\n",first->data);
	printf("first->next: %d\n",first->next);
	printf("\n");
	
	//terminate list at second node
	second->data=20;
	second->next=NULL;
	printf("second: %d\n",second);
	printf("second->data: %d\n",second->data);
	printf("second->next: %d\n",second->next);
	printf("\n");
	
	
	linkedListTraversal(head);
	
	int dec,data,index;
	char node[10];
	printf("1 for insertAtFirst\n 2 for insertAtIndex\n 3 for insertAtEnd\n 4 for insertAfterNode ");
	scanf("%d",dec);
	switch(dec)
	{
	 case 1:
	 	{
	 		head=insertAtFirst(head,12);
	 		break;
		 }
	 case 2:
	 	{
	 		head=insertAtIndex(head,data,index);
	 		break;
		 }
	 case 3:
	 {
	 	head=insertAtEnd(head,data);
	 	break;
		
	 }
	 case 4:
	 	{
	 		head=insertAfterNode(node[10],head,data);
	 		break;
		 }
	//after insertion
//	;
//	printf("\nafter insertion\n");
//	linkedListTraversal(head);
	printf("\nafter insertion\n");
//	head=insertAtEnd(head,40);
//	linkedListTraversal(head);

    head=insertAfterNode(first,head,31);
    linkedListTraversal(head);
}
	
}
