#include<stdio.h>
int main(){
    int fact = 1;
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        fact = fact * i;
    }
    printf("%d", fact);
}