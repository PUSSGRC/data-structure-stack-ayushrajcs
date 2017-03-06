/*
 * C program to implement stack. Stack is a LIFO data structure.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
#include <stdio.h>

 
void push(void);
int  pop(void);
void display(void);
 
void main ()
{
    int choice;
   
    int top = -1;
 
    printf ("STACK OPERATION\n");
    while (1)
    {
        printf ("-------------------------- MAIN MENU --------------------------\n");
        printf ("      1    -->    CREATE STACK                \n");
        printf ("      2    -->    PUSH               \n");
        printf ("      3    -->    POP               \n");
        printf ("      4    -->    DISPLAY               \n");
        printf ("      5    -->    TOP ELEMENT               \n");
        printf ("      6    -->    DELETE STACK               \n");
        printf ("      7    -->    EXIT           \n");
        printf ("------------------------------------------\n");
 
        printf ("Enter your choice:\t");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            create_stack();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        case 5:
            top_element();
            break;
        case 4:
            delete_stack();
            break;
        case 7:
            return 0;
        default:
            printf("YOU HAVE ENTERED A WRONG CHOISE, PLEASE TRY AGAIN\n");
        }
        fflush (stdin);
        
    }
}

//Create stack by asking the user to input the size of the stack
int create_stack()
{
    
}


/*  Function to add an element to the stack */
void push ()
{
   
}


/*  Function to delete an element from the stack */
int pop ()
{
   
}


/*  Function to display the status of the stack */
void display ()
{
   
}

//display the topmost element of the stack

void top_element()
{
    
}


//delete the created stack by using free() in case of pointer
void delete()
{
    
}