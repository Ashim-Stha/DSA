#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
};

void displayTraversalFwd(struct Node *head){
	struct Node *p=head;
	while(p!=NULL){
		printf("element:%d\n ",p->data);
		printf("location:%d\n ",p);
		printf("p->prev:%d\n ",p->prev);
		printf("p->next:%d\n ",p->next);
		printf("\n");
		p=p->next;
	}
}

void displayTraversalBwd(struct Node *head){
	struct Node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	
	while(p!=NULL){
		printf("element:%d\n ",p->data);
		printf("location:%d\n ",p);
		printf("p->prev:%d\n ",p->prev);
		printf("p->next:%d\n ",p->next);
		printf("\n");
		p=p->prev;
	}
}
int main(){
	struct Node *head;
	struct Node *second,*third;
	
	//creating nodes
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	
	//linking nodes
	head->data=7;
	head->prev=NULL;
	head->next=second;
	
	second->data=17;
	second->prev=head;
	second->next=third;
	
	third->data=30;
	third->prev=second;
	third->next=NULL;
	
	printf("displaying traversal forward\n");
	displayTraversalBwd(head);
	
	printf("displaying traversal backward\n");
	displayTraversalBwd(head);
	
}
