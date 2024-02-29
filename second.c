#include<stdio.h>
int main(){
 printf("Enter the value of array : ");
 int n = 0;
 scanf("%d", &n);
 int arr[n];
 for (int i = 0; i<n; i++)
 {
    scanf("%d\n",arr[i]);
    
 }
 for (int i = 0; i<n; i++)
 {
    printf("%p\n",&arr[i]);
    
 }
 
}