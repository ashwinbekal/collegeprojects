//Program to display the sparse matrix in Row, Column and Value table.
#include<stdio.h>
void main()
{
    printf("Enter the no.of rows and columns:\n");
    int m,n,a[100][100];
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Displaying the matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    printf("Displaying the sparse matrix in rcv format:\n");
    printf("Rows\tColumns\t\tValue\n");
    int val=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                val++;
            }
        }
    }
    printf("%d\t\t\t%d\t\t\t%d\n",m,n,val);
    printf("=========================\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                printf("%d\t\t\t%d\t\t\t%d\n",i,j,a[i][j]);
            }
        }
    }
}
