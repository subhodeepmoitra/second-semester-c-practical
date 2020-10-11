#include<stdio.h>//headerfile
#include<conio.h>//headerfile
void insertion(int [], int );
int main()//main function
{//bodiy of the main function
    int arr[30];//declaring an array of max size 30
    int i,size;//i is the loop running variable; size is the size of the array as defined by the user(not>30)
    printf("\n\t------- Insertion sorting using function -------\n\n");
    printf("Done by Subhodeep Moitra\n");
    printf("Enter total no. of elements : ");
    scanf("%d",&size);//accepting the size of the array
    for(i=0; i<size; i++)//loop to accept data into the array
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
     }
    insertion(arr,size);//calling the insertion function by the process  of call by value
    printf("\n\t------- Insertion sorted elements using function -------\n\n");
    for(i=0; i<size; i++)
         printf(" %d",arr[i]);//printing the sorted array
    return 0;
 }
void insertion(int arr[], int size)//the insertion function
{
	//defining the body of the function
    int i,j,tmp;//i for outer loop variable ; j for inner loop variable ; tmp for temporarily storing a value
    for(i=0; i<size; i++)
    {//outer loop body
       for(j=i-1; j>=0; j--) 
       {//inner loop body
          if(arr[j]>arr[j+1])//for sorting the array
          {
             tmp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=tmp;
           }
          else
          break;
        }  
     }
}
