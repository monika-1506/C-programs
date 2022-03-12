/*Write a C program to compute the sum of the two given integers. If one of the given integer value is in the range 10..20 inclusive return 18*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    printf("enter the value of a and b :");
    scanf("%d%d",&a,&b);

    if((a >= 10 && a <= 20) || (b >= 10 && b<= 20)){
        printf("18");
    }
    else{
        printf("%d",a+b);
        
    }
    
}