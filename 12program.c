/*Write a C program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range..*/
#include <stdio.h>

int main() {
    int a,b;
    printf("enter the value of a:");
    scanf("%d", &a);
        printf("enter the value of b:");
    scanf("%d", &b);
    if((a>=20 && b<=30 || a>=30 && b<=20)){
     if(a>b)
      printf("largest value is %d",a);
      else
      printf("largest value is %d",b);}

    else
      printf("not in the range ");
      
    }