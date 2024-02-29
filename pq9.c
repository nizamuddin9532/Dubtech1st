#include<stdio.h>
int main(){
    int n;
    int temp = 0;
    printf("Enter the number of elements in array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements of the array");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The resulting ascending array is :");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The resulting decending array is :");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
    return 0;
    }
