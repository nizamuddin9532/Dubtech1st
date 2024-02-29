#include<stdio.h>
int main(){
    int n;
    int p;
    printf("Enter the number of element in array");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of the array\n");
    for(int i = 0; i < n; i++){
        printf("Enter the %d element of the array", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
     p = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > p){
            p = arr[i];
        }
    }
    printf("\nlargest number among following number is : %d", p);
    return 0;

}