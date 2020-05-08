#include<stdio.h>

int stack[20];      //Declare stack array
int top = -1;
char postfix[100];      //Array for postfix
int i=0,j,a,b;

int ascii(char ch)      //Ascii function
{
    int i;
    i = ch;
    return((i-48));
}

void push(int k)        //Push function
{
    top = top + 1;
    stack[top] = k;
}

int pop()       //Pop function
{
    int s;
    s = stack[top];
    top = top -1;
    return(s);
}

void evaluate()     //Evaluate function
{
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i]))
        {
            j = ascii(postfix[i]);
            push(j);
        }
        else
        {
            switch(postfix[i])      //Check if character is an operator
            {
            case '+' :
                a = pop();
                b = pop();
                push((b+a));
                break;
            case '-' :
                a = pop();
                b = pop();
                push((b-a));
                break;
            case '*' :
                a = pop();
                b = pop();
                push((b*a));
                break;
            case '/' :
                a = pop();
                b = pop();
                push((b/a));
                break;
            }
        }
    }
}

int main()
{
    printf("Enter the postfix expression : ");      //Take input of postfix expression
    scanf("%s",postfix);

    evaluate();
    printf("%d is result\n",stack[top]);
}
