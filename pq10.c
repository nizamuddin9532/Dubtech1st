#include<stdio.h>
int main(){
    //Convert to Decimal
    printf("Please enter only binary number");
    long long bn;
    int count = 0;
    scanf("%lld", &bn);
    while(bn != 0){
        bn /= 10;
        count ++;
    }
    printf("Number of digits : %d", count);
    for(int i = count - 1; i >= 0; i--){
        for(int j = 0; j < count; j++){
        
        }
    }
    return 0;


}