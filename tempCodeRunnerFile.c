// stack 
#include<stdio.h>
#define n 5
int a[n];
int top = -1,i,ch;

int display()
{
    // printf("1. pop:");
    // printf("\n2. push:");
    // scanf("%d",&j);
    for(i=0;i<=top;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int aa()
{
    printf("\n 1.push:");
    printf("\n 2.Pop:");
    scanf("%d",&ch);

switch(ch)
{
    case 1;
    // int push(int val)

    {
        if(top>=n-1)
           printf("Array is full.....\n");
        else{
            ++top;
            a[top] = val;
         }
    }
    break;
    case 2;
    // int pop()
    {
        if(top<0)
            printf("\nArray is Empty..");
        else
            --top;
    }
    break;
    default;
    printf("\n wrong choice:");
    break;
}
}
    
int main()
{
   aa();
   display();

}