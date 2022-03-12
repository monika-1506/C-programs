/*Write a C program to check whether y is greater than x, and z is greater than y from three given integers x,y,z*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,z;
    printf("enter the value of x, y and z  :");
    scanf("%d%d%d",&x,&y,&z);

    if(y>x && z>y){
        printf("true");
    }
    else{
        printf("false");
        
    }
    
}