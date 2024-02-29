#include<stdio.h>
int main(){
    int arr[30], i, n, element, position;
    printf("Enter the Numbers of elements: ");
    scanf("%d", &n);
    printf("\n Enter the elements of array:\n");
    for(i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n Array enter by user are: \n");
    for(i = 1; i <= n; i++){
        printf("%d\t", &arr[i]);
        printf("Enter the position you want to enter:");
        scanf("%d", &position);
    }
}