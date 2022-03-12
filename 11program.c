/*Write a C program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.*/
#include <stdio.h>

int main() {
    int a,b;
    printf("enter the value of a:");
    scanf("%d", &a);
        printf("enter the value of b:");
    scanf("%d", &b);
    if((a >= 40 && a <= 50 && b >= 40 && b <= 50) || (a >= 50 && a <= 60 && b >= 50 && b <= 60)){
        printf("true");
    }
    else{
        printf("false");
    }
    
    return 0;
}