/*9. Write a C program to check whether two given integer values are in the range 20..50 inclusive.
Return true if 1 or other is in the said range otherwise false */

#include<stdio.h>
#include<stdlib.h>
int main (){
   
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
     
    printf("enter the value of b:");
    scanf("%d",&b);

    if((a >= 20 &b<= 50)|| (a <=20 & b >= 50) ){
        printf(" true number is in range 20...50\n");
    }
    else{
        printf("false");
    }
    return 0;
}