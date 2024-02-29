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
}