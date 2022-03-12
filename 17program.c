/*17. Write a C program to compute the sum of the two given integers. If the sum is in the range 
10..20 inclusive return 30*/

#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(a + b >= 10 && a + b <= 20){
        printf("30");
    }
    else{
        printf("%d",c);}
    
}