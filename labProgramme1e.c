#include<stdio.h>
int main(){
    printf("Enter the number elements in array");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of array\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            arr[i] = arr[i] + 5;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }
    printf("Resulting array \n");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
}