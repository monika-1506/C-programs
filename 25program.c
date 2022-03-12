/*Write a C program to check whether two or more non-negative given integers have the same rightmost digit.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    printf("enter the value of a, b and c  :");
    scanf("%d%d%d",&a,&b,&c);

    if(a % 10 == b % 10 || a % 10 == c % 10 || b % 10 == c % 10){
        printf("true");
    }
    else{
        printf("false");
        
    }
    
}