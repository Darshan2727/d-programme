#include<stdio.h>
int main()
{
int arr[] = {10,20,30,40,50};
int i; 
    for(i=0;i<5;i++)
    { 
    printf(" %d",arr[i]);
    }
     
        // Position where from the element is
        // going to move here 'python' is moved
        int x = 3;
         
        // Position at which element is to be
        // moved here 'python' is moved to 
        // index 1 which is index of 'Java'
        int pos = 1;
     
        // Store the moved element in a temp
        // variable
        int temp = arr[i];
         
        // shift elements forward
        // int i;
        for (i = x; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }
         
        // Insert moved element at position 
        arr[pos] = temp;
     
    printf("\n%d",arr[i]);
}    