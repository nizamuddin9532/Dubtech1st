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
    printf("Enter the postion where you insert the elements");
    scanf("%d", &position);
    printf("Enter the value of the elements");
    scanf("%d", &value);
    for(int i = n-1; i >= position - 1; i--){
        arr[i+1] = arr[i];
        
    }
    arr[position-1] = value;
    printf("Resulting array is\n");
    for(int i = 0; i <= n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}