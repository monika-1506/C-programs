//  elements in ascending order
#include <stdio.h>

int main() {
    int arr[15],i,n,j,temp;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements in  array\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("number in ascending order");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    }