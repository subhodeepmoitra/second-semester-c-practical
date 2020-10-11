#include <stdio.h>//header file
void quicksort (int [], int, int);
int main()//the main function
{//the main function
    int list[50];//declaring an array with max size 30
    int size, i;
    /*size = for accepting the size of the array as declared by the user
      i = to be used for running the loop
    */
    printf("Enter the number of elements: ");
    scanf("%d", &size); // accepting the size of the array
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++)//loop for accepting the data 
    {
        scanf("%d", &list[i]);//scanning the data from the user to be stored from the user
    } 
    quicksort(list, 0, size - 1);//calling the quicksort function by call by value process
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++)
    {//loop for displaying the sorted array
        printf("%d ", list[i]);// returning the value to the console for displaying
    }
    printf("\n");//printing new line
    return 0;//seccess code 0 if the program runs and executes successfully
}
void quicksort(int list[], int low, int high)//quick sort function
{
    int pivot, i, j, temp;
    /*pivot and temp for temporarily storing the data during the process of performing the sorting
      i for outer loop and j for inner loop
    */
    if (low < high)
    {
        pivot = low;//system codes for performing the sort
        i = low;// system codes for performing the sorting
        j = high;
        while (i < j) //checking statement
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);// calling the function itself 
        quicksort(list, j + 1, high);// calling the function itself
    }
}
