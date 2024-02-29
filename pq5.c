#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("Following number is even");
    }
    else{
        printf("Following number is odd");
    }

}