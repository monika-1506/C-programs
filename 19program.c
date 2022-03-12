/*Write a C program to test whether a non-negative number is a multiple of 13 or it is one more than a multiple of 13.

*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("enter the value of a :");
    scanf("%d",&a);

    if(a % 13 == 0 || a % 13 == 1){
        printf("true");
    }
    else{
        printf("false");
        
    }
    
}