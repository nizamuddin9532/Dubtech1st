#include <stdio.h>
#include<stdlib.h>
int main()
{
    int b[100];
    int i, j, n;
    int *a;
    printf("Enter the number elements in array");
    scanf("%d",&n);
    a = (int*)malloc(n * sizeof(int));
    if(a == NULL){
    printf("Memory allocaion is failed\n");
    return 1;
    }
    printf("Enter the array elements\n");
    for (i = 0; i < n ; i++)
        scanf("%d", &a[i]);
    
    for (i = n - 1, j = 0; i >= 0; i--, j++)
        b[j] = a[i];
    for (i = 0; i < n; i++)
        a[i] = b[i];
    
    printf("Reverse array is\n");
    
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    
    free(a);
    return 0;
}