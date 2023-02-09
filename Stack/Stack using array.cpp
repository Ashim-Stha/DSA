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
	for(int i=s->top;i>=0;i--){
		printf("data at index %d : %d\n",s->top-i+1,s->arr[i]);
		
	}
}

void peek(struct stack *s,int i){
	if(s->top-i+1<0){
		printf("Not a valid number\n");
	}
	else{
		int val = s->arr[s->top-i+1];
		printf("The element is : %d ",val);
	}
	
}

void stackTop(struct stack *s){
	int st = s->arr[s->top];
	printf("The topmost element is : %d\n",st);
}

void stackBottom(struct stack *s){
 int sb = s->arr[0];
 printf("The bottommost element is : %d\n",sb);	
}

int main()
{
	int data,dec,val,index;
	
	struct stack *s = (struct stack *)malloc(sizeof(struct stack));
	s->size=6;
	s->top=-1;
	s->arr=(int *)malloc(s->size*(sizeof(int)));
	
	while(dec!=7){
		
	printf("Enter 1 for push,2 for pop,3 for display,4 for peek,5 for stackTop,6 for stackBottom,7 for exit:\n");
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
				printf("Enter index:\n");
				scanf("%d",&index);
				peek(s,index);
			}
		case 5:
			{
				stackTop(s);
			}
		case 6:
			{
				stackBottom(s);
			}
		case 7:
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


