#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x){
    if(l <= r){
        int m = l + (r - l)/2;
        if(arr[m] == x){
            return m;
        }
        else if(arr[m] < x){
            return binarySearch(arr, m + 1, r, x);
        }
        else{
            return binarySearch(arr, l, m - 1, x);
        }
    }
    return -1;
}
int main(void){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1)? printf("Element does not found"): printf("Element found at index : %d", result);
    return 0;
}