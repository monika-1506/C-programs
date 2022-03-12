/*15. Write a C program to count the number of two 5's are next to each other in an array of integers. 
Also count the situation where the second 5 is actually a 6.*/
#include <stdio.h>

int main() {
    int n,arr[5],i=0,check=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
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