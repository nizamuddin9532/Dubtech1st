#include<stdio.h>
#include<stdlib.h>


void mersearray(int a, int arr1[a], int b, int arr2[b]){
        int index = 0, arr3[a+b];
        for(int i = 0; i < a; i++){
            arr3[index++] = arr1[i];
         
        }
        for(int i = 0; i < b; i++){
            arr3[index++] = arr2[i];
        }
          printf("Merged array:\n");
    for (int i = 0; i < a + b; i++) {
        printf("%d\n", arr3[i]);
}
}

int main(){
    int n;
    int temp1 = 0;
    printf("Enter the element in array");
    scanf("%d",&n);
    int arr1[n];
    scanf("Enter the element in array");
    for(int i = 0; i < n; i++){
        printf("Enter the element %d", i+1);
        scanf("%d",&arr1[i]);
    }
    for(int i = 0; i < n; i++){
        printf(" %d\n", arr1[i]);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr1[j] > arr1[j+1]){
                temp1 = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp1;
            }
        }
    }
    printf("resulting array :");
    for(int i = 0; i < n; i++){
     printf("%d\n", arr1[i]);

    }
    int m;
    int temp2 = 0;
    printf("Enter the element in array");
    scanf("%d",&m);
    int arr2[m];
    scanf("Enter the element in array");
    for(int i = 0; i < m; i++){
        printf("Enter the element %d", i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i = 0; i < m; i++){
        printf(" %d\n", arr2[i]);
    }
    for(int i = 0; i < m - 1; i++){
        for(int j = 0; j < m - i - 1; j++){
            if(arr2[j] > arr2[j+1]){
                temp2 = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp2;
            }
        }
    }
    printf("resulting array :");
    for(int i = 0; i < m; i++){
     printf("%d\n", arr2[i]);

    }
    mersearray(n, arr1, m, arr2);
    return 0;


}
