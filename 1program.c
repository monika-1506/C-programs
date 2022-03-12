/*1. Write a C program to compute the sum of the two given integer values. If the two values are the
same, then return triple their sum. Go to the editor*/
#include <stdio.h>

int main()
{
  int a,b;
  printf("enter the value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  if(a == b ){
      printf("triple of sum is %d",(a + b)*3);
  }
  else{
      printf("sum of a+b is %d",a+b);
  }
  
}