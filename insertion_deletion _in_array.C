#include<stdio.h>
#include<conio.h>
int main()
{
    int position,num,op;
    int a[100],size;
    printf("enter the array size");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter number 1 for insert ,number 2 for Delete");
    scanf("%d",&op);
    switch(op)
    {
        case 1 : printf("enter the position you want to enter ");
                scanf("%d",&position);
                printf("enter the number");
                scanf("%d",&num);

    for(int i=size;i>=position-1; i--) //the position = index value+1; eg:- 1st position= 0th index; size=no.of element in array
    { 
      a[i]=a[i-1];
    }
    a[position-1]=num;
    size++;// or size=size+1; 
    for(int i=0;i<size;i++)
    {
printf(" %d",a[i]);
    }
    break;
    case 2 : printf("enter the position you want to delete");
    scanf(" %d",&position);
    for(int i=position-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    for(int i=0;i<size;i++)
    {
        printf(" %d",a[i]);
    }
default : printf("enter 1 or 2 only and try again");
}

    return 0;
}
