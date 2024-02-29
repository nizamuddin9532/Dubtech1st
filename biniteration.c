#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x){
    while(l <= r){
        int m = l + (r - l)/2;
        if(arr[m] == x){
        return m;
        }
        else if(arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }

    }
    return -1;
}
int main(void){
    
    int n;
    int temp = 0;
    
    printf("Enter the element in array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
     for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    } 
    printf("resulting array");
    for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
    int x;
    printf("Enter the value of x which you want to search");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1)? printf("Enter element does not found"): printf("Elements is present index %d",result);
    return 0;
}