#include<stdio.h>
#include<stdlib.h>

struct myArr{
	int total_size;
	int used_size;
	int *ptr;
};

void createArr(struct myArr* arr,int tot,int use){
 arr->total_size=tot;
 arr->used_size=use;
 arr->ptr=(int*)malloc(tot*sizeof(int));
	
}

void setVal(struct myArr* arr){
	int n;
	for(int i=0;i<arr->used_size;i++){
	printf("Enter element(%d):",i);
	scanf("%d",&n);
	(arr->ptr)[i]=n;
}
}

void showArr(struct myArr* arr){
	for (int i=0;i<arr->used_size;i++)
	{
		printf("%d\n",arr->ptr[i]);
	}
}
int main(){
	struct myArr arr;
	createArr(&arr,10,3);
	printf("\nRunning setVal func\n");
	setVal(&arr);
	printf("\nRunning showArr func\n");
	showArr(&arr);
}
