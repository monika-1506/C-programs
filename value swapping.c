#include <stdio.h>

int main() {
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("entr second number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping:\n");
    printf("value of a:%d\n",a);
    printf("value of b:%d",b);
    
    return 0;
}