/* c program to perform binary search
note: array has to be sorted
*/
#include <stdio.h>
void binary_search();
 
int a[50], n, item,  beg, mid, end, i;// all these variables are declared globally
/*a[50] is an array with a max capacity of 50 elements
n is to accept the size of the array according to the user (not above 50)
item is to accept the item to be searched in the array
 beg is the element at the begining
 mid is the element at the middle
 end is the element at the end
 i is used as the loop variable
*/
int main()//the main function
{//body of the main function
    printf("\nEnter size of an array: ");
    scanf("%d", &n);//accept the size of the array
    printf("\nEnter elements of an array in sorted form:\n");
    for(i=0; i<n; i++)//loop to accept the array data into the loop
        scanf("%d", &a[i]);//scan the data into the array
    printf("\nEnter ITEM to be searched: ");
    scanf("%d", &item);//accept the item to be searched
    binary_search();//calling the binary_search() function 
    
    return 0;//if the program terminates successfully then the main method will return success code of 0
}
void binary_search()//function to perform the binary search of the sorted array
{
    beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=item))
    {
        if (item < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == item)//case when the item is found in the array
        printf("\n\nITEM found at location %d", mid+1);
    else//case when the data is not found in the array
        printf("\n\nITEM doesn't exist");
}
