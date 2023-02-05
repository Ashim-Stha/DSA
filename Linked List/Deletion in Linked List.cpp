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

struct Node * deleteFirstNode(struct Node *head,struct Node *first){
	struct Node *p = head;
	
	p->next=NULL;
	head=first;
	
	return head;
	} 
	
struct Node * deleteAtIndex(struct Node *head,int index){
	struct Node *p=head;
	struct Node *q=head;
	int i;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	while(i!=index+1)
	{
		q=q->next;
		i++;
	}
	p->next=q;
	return head;
}

struct Node * deleteAtEnd(struct Node * head){
	struct Node *p=head;
	while((p->next)->next!=NULL){
		p=p->next;
	}
	p->next=NULL;
	return head;
}

struct Node * deleteAfterNode(struct Node *node,struct Node *head){
	struct Node *p=node;
//	struct Node *=head;
    p->next=(p->next)->next;
    return head;
}
int main(){
	struct Node *head;
	struct Node *first;
	struct Node *second;
	struct Node *third;
	
	//allocate memory for nodes in the linked list in a heap
	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
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
	second->next=third;
	printf("second: %d\n",second);
	printf("second->data: %d\n",second->data);
	printf("second->next: %d\n",second->next);
	printf("\n");
	
	third->data=30;
	third->next=NULL;
	
	linkedListTraversal(head);
	
//	head=deleteFirstNode(head,first);
//	linkedListTraversal(head);
   
//    head=deleteAtIndex(head,1);
//    linkedListTraversal(head);
	
//	 head=deleteAtEnd(head);
//	 linkedListTraversal(head);
    
     head=deleteAfterNode(head,head);
     linkedListTraversal(head);
     
	
}
