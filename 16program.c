#include<stdio.h>
void main()
{
    int n,arr[5],i=0,check=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    for(i;i<5;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
    if((arr[i]==5 && arr[i+1]==5) || (arr[i]==5 && arr[i+1]==6))
    {
        check=check+1;
    }
    }
    printf("%d",check);
}