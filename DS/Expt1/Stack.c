#include<stdio.h>
# define MAX 5

int stack[5];   //Declare array stack
int top = -1;
int i,ch;

int isfull()    //isfull function
{
    if(top == MAX-1)
    {
        printf("Stack is FULL\n");
        return(1);
    }
    else
    {
        printf("Stack is NOT FULL\n");
        return(0);
    }
}
int isempty()   //isempty function
{
    if(top == -1)
    {
        printf("Stack is EMPTY\n");
        return(1);

    }
    else
    {
        printf("Stack is NOT EMPTY\n");
        return(0);
    }
}

void push()     //Declare push function
{
    int var;
    if(!isfull())
    {
        printf("Enter the element to be pushed : ");
        scanf("%d",&var);
        top = top + 1;
        stack[top] = var;
        printf("%d is pushed\n",stack[top]);
    }
}

void pop()      //Declare pop function
{
    if(!isempty())
    {
        printf("%d is popped\n",stack[top]);
        top = top - 1;
    }
}
void display()      //Display function
{
    for(i=top;i>-1;--i)
    {
        printf("%d\n",stack[i]);
    }
}

int main()
{
    start :
    printf("Enter your choice :\n1.PUSH\t2.POP\t3.ISEMPTY\t4.ISFULL\t5.DISPLAY\tchoice : ");
    scanf("%d",&ch);        //Ask for choice

    switch(ch)
    {
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            isempty();
            break;
        case 4 :
            isfull();
            break;
        case 5 :
            display();
            break;
        default :
            printf("Enter the correct choice\n");
            break;
    }
    goto start;     //Loop using goto
}
