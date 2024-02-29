#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x");
    scanf("%d", &x);
    int y;
    printf("Enter the value of y");
    scanf("%d", &y);
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("value of x is : %d and value of y is : %d", x, y);

}