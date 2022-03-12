/*7. Write a C program to check two given integers whether either of them is in the range 100..200
inclusive. */

#include<stdio.h>
#include<stdlib.h>
int main (){
   
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
     
    printf("enter the value of b:");
    scanf("%d",&b);
    if((a >= 100 && a <= 200) || (b >= 100 && b <= 200)){
        printf(" true number is inclusive\n");
    }
    else{
        printf("false");
    }
}
