#include<stdio.h>
# define MAX 5

int front = -1;
int rear = -1;

int queue[];        //Declare array for queue

void enqueue()      //Declare enqueue function
{
    int var;
    if(front==-1)
        front = 0;
//    if(rear >= MAX - 1)
//    {
//        printf("Queue is FULL\n");
//        return;
//    }
    printf("Enter the value :");
    scanf("%d",&var);
    rear = rear + 1;
    queue[rear] = var;
    printf("%d is queued\n",queue[rear]);
}
void dequeue()      //Declare dequeue function
{
    if(front== -1 || front > rear)
    {
        printf("Queue is EMPTY\n");
        return;
    }
    printf("%d is dequeued\n",queue[front]);
    front = front + 1;
}
void display()      //Declare display function
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    start :
    printf("Enter the choice\n1.Enqueue\t2.Dequeue\t3.Display\t");
    scanf("%d",&ch);        //Ask for choice

    switch(ch)
    {
    case 1 :
        enqueue();
        break;
    case 2 :
        dequeue();
        break;
    case 3 :
        display();
        break;
    default :
        printf("Enter the correct choice\n");
    }
    goto start;     //Loop using goto
}
