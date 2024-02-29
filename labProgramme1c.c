#include<stdio.h>
int main(){
    printf("Enter the number elements in array");
    int n, position, value;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of array\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the postion where you want delete the elements");
    scanf("%d", &position);
    for(int i = position - 1; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    printf("Resulting array \n");
    for(int i = 0; i < n-1; i++){
        printf("%d",arr[i]);
    }
    }
