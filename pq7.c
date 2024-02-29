#include<stdio.h>
int main(){
    float operand_1, operand_2;
    float output;
    char c;// c = is which operator we use example = +, -, *, /
    printf("Enter the value of operand1 and operand2 and operator");
    scanf("%f %c %f", &operand_1, &c, &operand_2);
    if(c == '+'){
        output = operand_1 + operand_2;
    }
    else if(c == '-'){
        output = operand_1 - operand_2;
    }
    else if(c == '*'){
        output = operand_1 * operand_2;
    }
    else if(c == '/'){
        output = operand_1 / operand_2;
    }
    else{
        printf("Please enter the valid information");
    }
    printf("output : %f", output);
    return 0;
}