/*Write a C program to check whether a given number is within 2 of a multiple of 10.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("enter the value of a :");
    scanf("%d",&a);

    if(a % 10 <= 2 ){
        printf("true");
    }
    else{
        printf("false");
        
    }
    
}