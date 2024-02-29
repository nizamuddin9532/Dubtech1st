#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, position;
    int *arr = NULL;
    printf("Enter the number elements in array\n");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation is failed\n");
        return 1;
    }
    printf("Enter the value of array\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the postion where you want delete the elements\n");
    scanf("%d", &position);
    for(int i = position - 1; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    printf("Resulting array \n");
    for(int i = 0; i < n-1; i++){
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
    }
