/*Write a C program to check whether it is possible to add two integers to get the third integer from three given integers.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    printf("enter the value of a, b and c  :");
    scanf("%d%d%d",&a,&b,&c);

    if((a == b + c || b == a + c || c == a + b)){
        printf("true");
    }
    else{
        printf("%d",a+b+c);
        
    }
    
}