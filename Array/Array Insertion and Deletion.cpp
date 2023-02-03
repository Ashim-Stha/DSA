#include<iostream>
using namespace std;
void display(int arr[],int size){
	//for traversal
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<' ';
	}
	cout<<endl;
}

void insertion(int arr[],int size,int index,int capacity,int element){
	index-=1;
	for(int i=size-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=element;
		
}
void deletion(int arr[],int size,int index){
	index-=1;
	for(int i=index+1;i<=size-1;i++){
		arr[i-1]=arr[i];
	}
  }
	

int main(){
	int capacity=5;
	int arr[capacity],size,dec,element,index;
	
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	
	for(int i=0;i<size;i++){
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
	}
	
    here:
	while(dec!=4){
	cout<<"Press 1 for insertion,2 for deletion,3 for display,4 for exit"<<endl;
	cin>>dec;
	
	switch(dec){
	case 1:
		{   
		if(size>=capacity){
		    cout<<"Overflow"<<endl;
		    break;
	    }
		    cout<<"Enter element"<<endl;
		    cin>>element;
		    cout<<"Enter where do you want to insert"<<endl;
			cin>>index;
			insertion(arr,size,index,capacity,element);
			 size+=1;
			break;
		}
	case 2:
		{   cout<<"Enter where do you want to delete"<<endl;
			cin>>index;
			deletion(arr,size,index);
			size-=1;
			break;
		}
	case 3:
		{
			display(arr,size);
			break;
		}
	case 4:
		{
			break;
		}
	default:
		{
			cout<<"error try again"<<endl;
			goto here;
		}
}
    
}
}
