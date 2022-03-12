#include <stdio.h>
/*14. Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of 
integers somewhere.*/
int main() {
    int n,arr[5],i=0,check=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    for(i;i<5;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]==1 && arr[i+1]==2 && arr[i+2]==3)
            check=check+1;
    }
    if(check!=0)
        printf("1");
    else
        printf("0");
}