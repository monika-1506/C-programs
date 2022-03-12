/*Write a C program to compute the sum of three given integers. If the two values are same return the third value.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){    
    printf("%d",compute(14, 9, 8));
    
    printf("\n%d",compute(5, 5, 12));
    
    }       
    int compute(int a, int b, int c)
         {
           
            if (a == b){

            return c;
            }
           else if (a== c)
             {
                 return b;
                 }
            else if (b == c){
                return a;
                }
                else{
            return a + b + c;
                }
         }