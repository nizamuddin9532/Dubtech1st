#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, position, value;
    int *arr = NULL;
    printf("Enter the number elements in array\n");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Memory allocaion is failed\n");
        return 1;
    }
    printf("Enter the value of array\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the postion where you insert the elements\n");
    scanf("%d", &position);
    printf("Enter the value of the elements\n");
    scanf("%d", &value);
    for(int i = n-1; i >= position - 1; i--){
        arr[i+1] = arr[i];   
    }
    arr[position-1] = value;
    printf("Resulting array is\n");
    for(int i = 0; i <= n; i++){
        printf("%d\n",arr[i]);
    }
    free(arr);
    return 0;

}