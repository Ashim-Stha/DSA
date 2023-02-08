#include<stdio.h>
#include<stdlib.h>

struct stack {
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack *p){
  if(p->top==-1){
  	return true;
  }	
  else
  {
  	return false;
  }
}

int isFull(struct stack *s){
	if(s->top==s->size-1){
		return true;
	}
	else
    {
  	   return false;
    }
}

void push(int data,struct stack *s){
	    s->top++;
   	    s->arr[s->top]=data;
	
}
int pop(struct stack *s){
	if(isEmpty(s)){
		printf("Stack underflow\n");
	}
	else
	{
	  int val;
	  val=s->arr[s->top];
	  s->top--;
	  return val;
	}
}

void display(struct stack *s){
	for(int i=0;i<=s->top;i++){
		printf("data are : %d\n",s->arr[i]);
	}
}
int main()
{
	int data,dec,val;
	
	struct stack *s = (struct stack *)malloc(sizeof(struct stack));
	s->size=6;
	s->top=-1;
	s->arr=(int *)malloc(s->size*(sizeof(int)));
	
	while(dec!=4){
		
	printf("Enter 1 for push,2 for pop,3 for display,4 for exit:\n");
	scanf("%d",&dec);
	
	switch(dec){
		case 1:
			{
				if(isFull(s)){
		       printf("Stack overflow\n");
	          }
	        else
	            {
				printf("Enter data:\n");
				scanf("%d",&data);
				push(data,s);
				break;
			 }
		}
		case 2:
			{
				val=pop(s);
				printf("The deleted value is: %d\n",val);
				break;
			}
		case 3:
			{
				display(s);
				break;
			}
		case 4:
			{
				break;
			}
		default:
			{
				printf("Enter decision correctly\n");
				break;
			}
	}
}

}


