/*13. Write a C program to check if two given non-negative integers have the same last digit. Go to 
the editor*/
#include <stdio.h>

int main() {
    printf("%d",sample(123, 456));
    printf("\n%d",sample(12, 512));
   

    }       
  int sample(int a, int b)
        {
          return abs(a % 10) == abs(b % 10);

    
    return 0;
}