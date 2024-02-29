#include<stdio.h>
int main(){
    float principalAmount, time, rate, compoundInterest;
    printf("Enter the value of principalAmount, time, rate"); 
    scanf("%f %f %f", &principalAmount, &time, &rate);
    compoundInterest = principalAmount*( pow(1 + rate / 100, time));
    printf("value of the compoundInterest is : %f", compoundInterest);
    return 0;
}