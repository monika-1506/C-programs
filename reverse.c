//  elements in reverse order
#include <stdio.h>

int main() {
    int arr[15],i,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements in ascending order\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("elements in reverse order\n");
    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    
    }