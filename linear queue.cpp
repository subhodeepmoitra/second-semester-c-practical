    /* SIMPLE PROGRAM TO IMPLEMENT LINEAR QUEUE 
    CONCEPT USED: DYNAMIC MEMORY ALLOCATION
                  QUEUE
                  DATA STRUCTURE
    NAME OF CODER: SUBHODEEP MOITRA
    PLATFORM DEPENDENCY OF THE CODE: CODE IS PLATFORM INDEPENDENT
    OS USED FOR TESTING THE CODE: UBUNTU 20.04.1, MINT 20 AND WINDOWS 10
    */
	#include<stdio.h>   
    #include<stdlib.h>  
    // NOW I WILL BE DECLARING A STRUCTURE
    // A STRUCTURE IS A COMPOSITE DATA TYPE
    struct node   
    {  
        int data;   
        struct node *next;  
    };  
    struct node *front;  
    struct node *rear;   
    void insert();  // USED TO INSERT DATA INTO THE QUEUE
    void dequeue();  // USED TO DELETE THE LAST INSERTED DATA FROM THE QUEUE
    void display();  // USED TO DISPLAY THE QUEUE
    int main ()  
    {  
    /* THIS IS THE BODY OF THE MAIN METHOD
    THE MAIN METHOD WILL RETURN 1 AND HAS AN INTEGER RETURN DATA TYPE */
        int choice;   // CHOICE OF THE USER
        while(choice != 4)   // THIS WILL CONTINUE TILL THE USER TERMINATES THE PROGRAM
        {     
            printf("\n*************************Main Menu*****************************\n");  
            printf("\nPROGRAM BY SUBHODEEP MOITRA, BCA, 15201219082, SECOND SEM\n");  
            printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
            printf("\nEnter your choice ?");  
            scanf("%d",& choice);  
            switch(choice)  
            {  
                case 1:  
                insert();  // INSERT DATA INTO THE QUEUE
                break;  
                case 2:  
                dequeue ();  // DELETE THE LAST INSERTED DATA FROM THE QUEUE
                break;  
                case 3:  
                display();  // DISPLAY THE CONTENTS OF THE QUEUE
                break;  
                case 4:  
                exit(0);  // TERMINATES THE PROGRAM
                break;  
                default:   
                printf("\nINVALID INPUT\nCONTROL RETURNED AN ERROE CODE (1)\n"); // WRONG CASE INPUT  
            }  
        }  
        return 1;
    }  
    void insert()  
    {  
        struct node *ptr;  // THIS POINTER USED TO LINK AND DIRECT THE NEXT NODE
        int item;   
          
        ptr = (struct node *) malloc (sizeof(struct node));  // CREATE A DYNAMICALLY DECLARED STORAGE
        if(ptr == NULL)  
        {  
        /* WHEN THERE IS NO MEMORY LEFT TO BE ALLOCATED 
        CASE VALID FOR LOW MEMORY */
            printf("\nOVERFLOW\n");  
            return;  
        }  
        else  
        {   /* IF THERE IS MEMORY AVAILABLE THEN A NEW NODE WILL BE CREATED AND
        DATA WILL BE INSERTED INTO THE QUEUE */
            printf("\nEnter value?\n");  
            scanf("%d",&item);  
            ptr -> data = item;  
            if(front == NULL)  
            {  
                front = ptr;  
                rear = ptr;   
                front -> next = NULL;  
                rear -> next = NULL;  
            }  
            else   
            {  
                rear -> next = ptr;  
                rear = ptr;  
                rear->next = NULL;  
            }  
        }  
    }     
    void dequeue ()  
    {  
        struct node *ptr;  
        if(front == NULL)  
        {  /* CASE VALID WHEN THERE IS NO DATA LEFT IN THE QUEUE */
            printf("\nUNDERFLOW\n");  
            return;  
        }  
        else   
        {  
            ptr = front;  
            front = front -> next;  
            free(ptr);  
        }  
    }  
    void display()  
    {  
        struct node *ptr;  
        ptr = front;      
        if(front == NULL)  
        {  
            printf("\nEmpty queue\n");  
        }  
        else  
        {   printf("\nprinting values .....\n");  
            while(ptr != NULL)   
            {  
                printf("\n%d\n",ptr -> data);  
                ptr = ptr -> next;  
            }  
        }  
    }  
