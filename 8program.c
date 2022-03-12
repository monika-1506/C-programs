/*8. Write a C program to check whether three given integer values are in the range 20..50 inclusive.
Return true if 1 or more of them are in the said range otherwise return false. */

#include<stdio.h>
#include<stdlib.h>
int main (){
   
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
     
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if((a >= 20 && a <= 50) || (b >= 20 && b <= 50) || (c >= 20 && c <= 50)){
        printf(" true number is in range 20...50\n");
    }
    else{
        printf("false");
    }
    return 0;
}
