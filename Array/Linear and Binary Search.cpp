#include<iostream>
using namespace std;

//linear search
int linearSearch(int arr[],int size,int element){
	for(int i=0;i<size;i++){
		if(arr[i]==element)
		{
			return i;
		}
		
	}
	return -1;
	
}

//binary search
int binarySearch(int arr1[],int size1,int element1){
	int high=size1-1,low=0,mid;
	while(low<=high){
	mid=(high+low)/2;
	if(arr1[mid]==element1){
		return mid;
    }
    if(arr1[mid]<element1){
    	low=mid+1;
	}
	if(arr1[mid]>element1){
		high=mid-1;
	}
	}
	return -1;
}

int main()
{
	//unsorted array for linear search
	int arr[]={1,23,34,45,56,78,9,32,54};
	int size = sizeof(arr)/sizeof(int);
	int element = 78;
	int index = linearSearch(arr,size,element);
	if(index!=-1){
	 cout<<"The element is found at index "<<index<<endl;
    }
    else{
 	 cout<<"Not in the array"<<endl;
     }
 
    //sorted array for binary search
    int arr1[]={1,23,34,45,56,78,90,100};
    int size1=sizeof(arr1)/sizeof(int);
    int element1=34;
    int index1=binarySearch(arr1,size1,element1);
    if(index1!=-1){
	 cout<<"The element is found at index "<<index1<<endl;
    }
    else{
 	 cout<<"Not in the array"<<endl;
     }

	
}
