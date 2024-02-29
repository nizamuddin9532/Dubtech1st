#include<stdio.h>
#include <stdlib.h>
int main(){
int n;
int *arr = NULL;
printf("Enter the number the element in array");
scanf("%d", &n);
arr = (int*)malloc(n * sizeof(int));
if(arr == NULL){
    printf("Memory allocaion is failed\n");
    return 1;
}
printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
printf("Enter the value which you search in array\n");
        int z;
    scanf("%d",&z);
    int index = 0;
    for(int i = 0; i < n; i++){
        if(z == arr[i]){
            index = i;
            printf("index of elements: %d\n", i);
        }
    }
    free(arr);
    return 0; 
}



