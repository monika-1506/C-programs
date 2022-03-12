/*Write a C program to check two given integers, each in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    printf("enter the value of x  and y  :");
    scanf("%d%d",&x,&y);

if((x>10 && x<99) && (y>10 && y<99))
    {
        if(x%10==y%10)
            printf("1");
        else
            printf("0");
    }
    else
        printf("0");
    
}