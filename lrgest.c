// find alrgest elements of an array
#include <stdio.h>

int main() {
    int i,large;
    int arr[5]= {10,20,17,9,34};
    large= arr[0];
    for (i=1;i<5;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    
        }
     printf("large:%d\n",large);
    

    
}