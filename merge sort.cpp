#include<stdio.h>//header file
void mergesort(int a[],int i,int j);//function to sort array using merge sort
void merge(int a[],int i1,int j1,int i2,int j2);//function used to merge the array
int main()//the main method
{
	int a[30],n,i;
	/*
	a[30] is an array with max space of 30 elements
	n is the size of the array as defined by the user, but not exceeding the pre defined array size
	i is the variable used to control the loop
	 */
	
	printf("Enter no of elements:");
	scanf("%d",&n);//scan the number of elements from the user at runtime
	printf("Enter array elements:");
	for(i=0;i<n;i++)//loop to accept the array elements
		scanf("%d",&a[i]);//scan the array elements from the user at run time
	mergesort(a,0,n-1);// calling function using call by value method
	printf("\nSorted array is :\n");
	for(i=0;i<n;i++)//loop for printing the sorted array
		printf("%d ",a[i]);//code to print the sorted array to the console for display
	return 0;//if the full code runs and terminates succesfully then the main will return success code 0
}
void mergesort(int a[],int i,int j)//function to perform the merge sort
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
}
void merge(int a[],int i1,int j1,int i2,int j2)//function to merge the two sorted sub arrays
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first list
	j=i2;	//beginning of the second list
	k=0;
	while(i<=j1 && j<=j2)	//while elements in both lists
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	while(i<=j1)	//copy remaining elements of the first list
		temp[k++]=a[i++];
		
	while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=a[j++];
	//Transfer elements from temp[] back to a[]
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}
