/*3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum
is 30 */

#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d", &a);
        printf("enter the value of b:");
    scanf("%d", &b);
    if(a == 30 || b == 30 || (a + b == 30)){
        printf("true");
    }
    else{
        printf("false");
    }
    
    return 0;
}