#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    printf("fibonacci series\n");
    for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}