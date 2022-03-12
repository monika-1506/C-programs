/*4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200. Go to
the editor */

#include<stdio.h>
#include<stdlib.h>
int main (){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(abs(a - 100) <= 10 || abs(a - 200) <= 10){
        printf("true\n");
    }
    else{
        printf("false");
    }
}