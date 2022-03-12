/*18. Write a C program that accept two integers and return true if either one is 5 or their sum or 
difference is 5.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);

    if(a == 5 || b == 5 || a + b == 5 || abs(a - b) == 5){
        printf("true");
    }
    else{
        printf("false");
        
    }
    
}