/*Write a C program to check whether a non-negative given number is a multiple of 3 or 7, but not both.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("enter the value of a :");
    scanf("%d",&a);

    if(a % 3 != 0&&a%7==0 || a % 7 != 1&& a%3==0){
        printf("true");
    }
    else{
        printf("false");
        
    }
    
}