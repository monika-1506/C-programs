/*Write a C program to compute the sum of the three integers. If one of the values is 13 then do not count it and its right towards the sum.*/

#include <stdio.h>
#include <stdlib.h>
int main(void){    
    
    printf("\n%d",compute(9, 15, 11));
    printf("\n%d",compute(22, 13, 17));
    printf("\n%d",compute(13, 11, 18));
    }       
    int compute(int x, int y, int z)
         {
           if (x == 13){
                return 0;
           }
           else if (y == 13){

            return x;
           }
           else if (z == 13) {
               return y + z;
           }
           else {
               return x + y + z;
           }
         }