#include<stdio.h>
#include<conio.h>
void push();
void pop();
void peek();
void display();
 int a[50],top=-1,i,value,op,n;
int main()
{
    printf("enter the size of array");
    scanf("%d",&n);
    
    while(op!=5)
     {
         printf("we use array to make stack "); //(or this in push) sir we can not take the stack input as just using for loop as in array?
     
    printf("enter \n 1.push \n 2.pop \n 3.peek \n 4.display \n 5.exit");
    scanf("%d",&op);
switch(op)
{
    case 1 :
    push();
    break;
    case 2 : pop();
    break;
    case 3 : peek();
    break;
    case 4 : display();
    break;
    case 5 : printf("bye bye");
    break;
    
    default: printf("enter the valid num");
    break;
   
}
     }
    return 0;



}
void push()
{
    if(top==n-1)
    {
      printf("overflow condition");
    }
    else 
    {
        
         printf("enter the value \n");
        scanf("%d",&value);
        top=top+1;
        a[top]=value;
        }
    }
        
    
    

void pop()
{
    if(top==-1)
    {
        printf("the stack is underflow \n ");
    }
    else
    {
        printf("the poped value is %d  \n",a[top]);
        top=top-1;
    }
}
    void peek()
    {
    if(top==-1)
    {
        printf("the stack is underflow \n ");
    }
    else{ 
        
        
 printf("%d \n",a[top]);
        }
        

    }
    
    void display()
    {
        for(i=0;i<=top;i++) // nested function(function in function) in not allowed in c
        {
            printf(" %d",a[i]);//the loop improvetion is correct?
        }
    }

