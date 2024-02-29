#include<stdio.h>
int maxarray(int arr[], int n){
 int max = arr[0];
 for(int i = 1; i < n; i++){
    if(max < arr[i]){
        max = arr[i];
    }
 }
 return max;
 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,89,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int munber = maxarray(arr,n);
    printf("%d", munber);
}