#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
int isEmpty(struct Node *top){
	if(top==NULL){
		return true;
	}
	else
	{
		return false;
	}
}

int isFULL(){
	struct Node *n = (struct Node*)malloc(sizeof(struct Node));
	if(n==NULL){
		return true;
	}
	else
	{
		return false;
	}
}
struct Node * push(struct Node *top,int data){
	if(isFULL()){
		printf("Stack overflow\n");
	}
	else
	{
	struct Node *p = (struct Node*)malloc(sizeof(struct Node));
	p->data=data;
	p->next=top;
	top=p;
	return top;
    }
}

int pop(struct Node **top){
	if(isEmpty(*top)){
		printf("Stack underflow\n");
	}
	else{
	struct Node *p=(*top);
	int x = (*top)->data;
	(*top)=(*top)->next;
	free(p);
	return x;
}
}

void display(struct Node *p){
	while(p!=NULL){
		printf("data : %d\n",p->data);
		p=p->next;
	}
}

void peek(struct Node *top,int i){
	struct Node *p=top;
	for(int j=0;(j<i-1 && p!=NULL);j++){
	p=p->next;
  }
    if(p!=NULL)
    {
    	printf("data : %d\n",p->data);
	}
	else
	{
		printf("Invalid\n");
	}
	
}
int main(){
	struct Node *top=NULL;
    int dec,data,val,index;
	
	while(dec!=7){
		
	printf("Enter 1 for push,2 for pop,3 for display,4 for peek,5 for stackTop,6 for stackBottom,7 for exit:\n");
	scanf("%d",&dec);
	
	switch(dec){
		case 1:
			{
				printf("Enter data:\n");
				scanf("%d",&data);
				top=push(top,data);
				break;
			}
		case 2:
			{
				val=pop(&top);
				printf("The deleted value is: %d\n",val);
				break;
			}
		case 3:
			{
				display(top);
				break;
			}
		case 4:
			{   
			    printf("Enter index:\n");
				scanf("%d",&index);
				peek(top,index);
				break;
			}
		case 7:
			{
				break;
			}
}
}

	
}
