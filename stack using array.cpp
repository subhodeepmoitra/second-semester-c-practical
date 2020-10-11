    // IMPLEMENTATION OF STACK USING ARRAY
	#include <stdio.h>   
    int stack[100],i,j,choice=0,n,top=-1;  
    void push();  // TO INSERT VALUE INTO THE STACK
    void pop();  // TO DELETE VALUE FROM THE STACK
    void show();  // TO SHOW THE VALUE INTO THE STACK
    int main ()  
    {  
          
        printf("Enter the number of elements in the stack ");   
        scanf("%d",&n);  
        printf("*********Stack operations using array*********");  
      
    printf("\n----------------------------------------------\n");  
        while(choice != 4)  
        {  
            printf("Chose one from the below options...\n");  
            printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
            printf("\n Enter your choice \n");        
            scanf("%d",&choice);  
            switch(choice)  
            {  
                case 1:  
                {   
                    push();  
                    break;  
                }  
                case 2:  
                {  
                    pop();  
                    break;  
                }  
                case 3:  
                {  
                    show();  
                    break;  
                }  
                case 4:   
                {  
                    printf("Exiting....");  
                    break;   
                }  
                default:  
                {  
                    printf("Please Enter valid choice ");  
                }   
            };  
        }
		return 1;  
    }   
      
    void push ()  
    {  
        int val;      
        if (top == n )   // WHEN THE TOP OF THE STACK IS SAME AS THE SIZE OF THE STACK THEN NO DATA CAN BE ADDED FURTHER
        printf("\n Overflow");   
        else   
        {  
            printf("Enter the value?");  
            scanf("%d",&val);         
            top = top +1;   
            stack[top] = val;   
        }   
    }   
      
    void pop ()   
    {   
        if(top == -1)//WHEN THERE IS NO DATA IN THE STACK THEN NO DATA CAN BE DELETED   
        printf("Underflow");  
        else  
        top = top -1;   
    }   
    void show()  
    {  
        for (i=top;i>=0;i--)  
        {  
            printf("%d\n",stack[i]);  
        }  
        if(top == -1)   
        {  
            printf("Stack is empty");  
        }  
    }  
