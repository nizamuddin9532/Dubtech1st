#include <stdio.h>
int main()
{
    int b[100];
    int i, j;
    printf("Enter the number elements in array");
    int n;
    scanf("%d",&n);
    int a[n];
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
    
    return 0;
}