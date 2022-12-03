#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},b[11],i;
    printf("Program to insert an element in the array:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    printf("\n");
    printf("Array after inserting 25 at index 4 is:\n");
    for(i=0;i<11;i++)
    {
        if(i==4)
        {
            for(i=10;i>4;i--)
            {
            b[i]=a[i-1];
            }
            b[i]=25;
            break;
        }
    }
    for(i=0;i<11;i++)
    printf("%d\t",b[i]);
}
