#include <stdio.h>//header file
int findmax(int b[10], int k);//to find the maximum value of the array
void exchang(int b[10], int k);//to excange between the larger and smaller values
int main()
{
	//body of the main function
    int array[10];//the array which will store the values given by the user , limit 10 elements
    int i, n;
    /* Variable description
    i = variable to run the loop
    n = accept the size of the array, not exceeding the max size of 10
    */
    printf("Enter the value of n \n");
    scanf("%d", &n);//accept the size of the array from the user (not more than 10 elements)
    printf("Enter the elements one by one \n");
    for (i = 0; i < n; i++)//loop to scan elements of the array from the user
    {
        scanf("%d", &array[i]);//scanning the elements of the array from the user
    }
    printf("Input array elements \n");
    for (i = 0; i < n ; i++)//loop to display the user inputted data into the array
    {
        printf("%d\n", array[i]);//displaying the user submitted data
    }
    /*  Selection sorting begins */
    exchang(array, n);//calling the exchange method by process of call by value
    printf("Sorted array is...\n");
    for (i = 0; i < n; i++)//loop for displaying the sorted arrays
    {
        printf("%d\n", array[i]);//printing the sorted array
    }
    return 0;//if the code runs and executes properly then the main method will return success code of 0
}
/*  function to find the maximum value */
int findmax(int b[10], int k)
{
    int max = 0, j;
    /*Variable description
    max = variable to carry the maximum value
    j = variable to control the loop
    */
    for (j = 1; j <= k; j++)//loop to find the maximum value in the array
    {
        if (b[j] > b[max])//condition for finding out the max value
        {
            max = j;//max storing the maximum value
        }
    }
    return(max);//this function will return the value of max 
}
void exchang(int b[10], int k)//function to exchange the greater value with the lesser ones
{
    int  temp, big, j;
    /*Variable Declaration
    temp = a variable to store a value temporarily(to be used while swapping)
    big = a variable to store the big numbers
    j = a variable used to run and control the loop
    */
    for (j = k - 1; j >= 1; j--)//loop to swapping the greater values with the lesser ones
    {
        big = findmax(b, j);
        temp = b[big];
        b[big] = b[j];
        b[j] = temp;
    }
    return;// as this function will not return anything and has a void return data-type, hence return statement has no values
}
