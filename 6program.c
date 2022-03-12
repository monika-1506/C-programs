/*6. Write a C program to check whether a given temperatures is less than 0 and the other is greater
than 100. */

#include<stdio.h>
#include<stdlib.h>
int main (){
   
    int t1,t2;
    printf("enter the value of t1:");
    scanf("%d",&t1);
     
    printf("enter the value of t2:");
    scanf("%d",&t2);
    if(t1 < 0 && t2 > 100 || t1>100 && t2 < 0){
        printf("true\n");
    }
    else{
        printf("false");
    }
}
