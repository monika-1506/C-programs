Write a C program to compute the sum of the elements of a given array of integers.

#include <stdio.h>
#include <stdlib.h>
int main(){
   int arr[5], i, n,sum;
    printf("enter no of elements:");
    scanf("%d", &n);
    for(i=0;i<5;i++){
        printf("elements %d:",i+1);
        scanf("%d",&arr[i]);
        sum +=arr[i];    
    }
    

    printf("sum= %d", sum);
    
}