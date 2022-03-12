/*Write a C program to find the larger from two given integers. However if the two integers have the same remainder when divided by 5, then the return the smaller integer. If the two integers are the same, return 0.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    printf("enter the value of a  and b  :");
    scanf("%d%d",&a,&b);

 if (a == b)
            {
                printf("0");
            }
            else if ((a % 5 == b % 5 && a < b) || a > b)
            {
                printf("%d",a) ;
            }
            else
            {
            printf("%d",b);
             }
    
}