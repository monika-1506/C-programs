#include<stdio.h>
void main()
{
    int n,arr[5],i=0,check=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[0]==arr[5-1])
            {check=check+1;}
    }
    if(check!=0)
       {
         printf("1");
       }
    else
        {
            printf("0");
        }

}