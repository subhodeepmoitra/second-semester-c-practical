#include <stdio.h>//headerfile
long linear_search(long [], long, long);
int main()//main method
{
	/*body of the main method
	the program execution will start from the main method*/
   long array[100], search, c, n, position;
   /* The variable functions:
       array[] is an array which will store the data, max size is 100
	   search will accept a number from the user to be searched from the array
	   c is the variable used for iterating counter
	   n is the number of data which will be stored in the array
	   position will contain the position of the searched data in the array (valid if data is found) 
   */
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
   printf("Input %d numbers\n", n);
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);//accept the data of the array
   printf("Input a number to search\n");
   scanf("%ld", &search);//accept the data to be searched
   position = linear_search(array, n, search);
   if (position == -1)//case if the searched data is not found
      printf("%d Searched data not found\n", search);
   else//case when the searched data is found in the array
      printf("%d is present at location %d.\n", search, position+1);
   return 0;//the main method will return 0 if the program properly terminated
}
 
long linear_search(long a[], long n, long find)//function for performing the linear search
{
    // body of the function
   long c;// c is the variable used for iterating purposes
   for (c = 0 ;c < n ; c++ ) //loop for performing the search in the array
   {
      if (a[c] == find)//condition when the data is found in the loop
         return c;//returns the position of the data in the array
   }
   return -1;//returns -1 when the data is not found in the loop
}
