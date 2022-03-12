#include <stdio.h>
#include <stdlib.h>
int main(){
printf("%d",smple(200, 200));
}
int smple(int a, int b)
{
int n = 100;
int val = (a - n);
int val2 = (b - n);
return val == val2 ? 0 : (val < val2 ? a : b);
}