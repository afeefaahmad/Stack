//Push , Pop ,Display
#include <stdio.h>
#include <stdlib.h>
# define n 5
int top;
int s[n]; //stack of capacity n

int push()
{
    int new;
    if(top==n-1)
        printf("overflow");
    else
    {
        printf("\n enter element you want to push:");
        scanf("%d",&new);
        top=top+1;
        s[top]=new;
    }
}

int pop()
{
    if(top==-1)
        printf("underflow");
    else
    {
        printf("element is to be deleted :%d",s[top]);
        top=top-1;
    }
}
int display()
{
    printf("elements are:");
    for (int i=top;i>0;i--)
        printf("%d",s[i]);
}

int main()
{
    int num;
    while(1)
    {
        printf("\n1.push \n2.pop \n3.display \n4.exit");
        printf("\n enter choice:");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("invalid input!");
                
        }
    }
    
}
