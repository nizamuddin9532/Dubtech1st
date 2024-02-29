#include<stdio.h>

int sumNuteralNum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n +sumNuteralNum(n-1);
    }
}

int main(){
    int n =10;
    int sumnumber = sumNuteralNum(n);
    printf("%d", sumnumber);
    return 0;
}