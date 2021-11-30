#include<stdio.h>
int stack[5];
int loc = -1;
void push()
    {
        int x;
        int i;
        printf("enter data\n");
        for(i=0;i<=4;i++)
            {
            printf("\n");
            scanf("%d",&x);
            if(loc == 4)
                printf("overflow");
            else
                loc++;
                stack[loc]=x;
                    
            }
        
    }
void pop()
    {
        int cat;
        printf("\nNow we are gonna pop. We will see it will be the first element.\n");
        if(loc==-1)
            printf("underflow");
        else
            {
                cat=stack[loc];
                loc--;
                printf("%d\n",cat);
            }
    }
void peek()
    {
        int pew;
        if(loc==-1)
        printf("underflow");
        else
            {
                pew=stack[loc];
                printf("\nthe peeked one is:\n%d\n",pew);
            }
    }
void display()
    {
        int p;
        printf("\nhere is the stack:\n");
        for(p=loc;p>=0;p--)
            {
                printf("\n%d\n",stack[p]);
            }
    }
main()
{
    push();
    pop();
    display();
    peek();
}