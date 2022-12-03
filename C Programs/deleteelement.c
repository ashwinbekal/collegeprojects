#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},i;
    printf("Program to delete an element in the array:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Array after removing 5 from the array is:\n");
    for(i=0;i<10;i++)
    {
        if(a[i]==5)
        {
            for(i;i<10;i++)
            {
            a[i]=a[i+1];
            }
            break;
        }
    }
    for(i=0;i<10-1;i++)
    printf("%d\t",a[i]);
}
