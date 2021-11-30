#include<stdio.h>
    int queue[5];
    int front=-1;
    int rear=-1;
    void enqueue()
        {
            int b;
            int x;
            printf("\nput your elements:\n");
            for(b=0;b<=4;b++)
                {
                scanf("%d",&x);
                if(rear==4)
                    {
                        printf("\noverflow\n");
                    }
                else if(front==-1 && rear==-1)
                    {
                        front=0;
                        rear=0;
                        queue[rear]=x;
                    }
                else
                    {
                        rear=rear+1;
                        queue[rear]=x;
                    }
                }
        }
    void dequeue()
        {
            printf("\nDequeued element is:\n");
            if(front==-1 && rear==-1)
                printf("queue is empty");
            else if(front==rear)
                {
                    front=rear=-1;
                }
            else
                {
                    printf("\n%d\n",queue[front]);
                    front++;
                }
        }
    void display()
        {
            int i;
            if(front==-1 && rear==-1)
                {
                    printf("\nqueue is empty\n");
                }
            else
                {
                    printf("\nHere is the new queue:\n");
                    for(i=front;i<rear+1;i++)
                        {
                            printf("\n%d\n",queue[i]);
                        }
                }
        }
        void peek()
            {
            if(front==-1 && rear==-1)
                {
                    printf("\nqueue is empty\n");
                }
            else
                printf("\nthe peeked element is:\n%d\n",queue[front]);
            }
main()
{
    enqueue();
    dequeue();
    display();
    peek();
}