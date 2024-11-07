// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char op,choice;
    float a,b,c;
    /*sum,subtract,multiply,divide,*/
    float result;
    float sum(float a,float b){
        return a+b;
    }
    float subtract(float a,float b){
        return a-b;
    }
    float multiply(float a,float b){
        return a*b;
    }
    float divide(float a,float b){
        return a/b;
    }
    printf("Enter first number:");
    scanf("%f",&a);
    next:
    printf("Enter operation:");
    scanf(" %c",&op);
    printf("Enter second number:");
    scanf("%f",&b);
    if (op=='+' ){
        result=sum(a,b);
    }
    else if(op=='-'){
        result=subtract(a,b);
    }
    else if(op=='*'){
        result=multiply(a,b);
    }
    else if(op=='/'){
        result=divide(a,b);
    }
    else{
        printf("Invlaid operation.");
        goto invalid;
    }
    printf("Do you to further calculation (Y/N):");
    scanf(" %c",&choice);
    if (choice=='Y'){
        a=result;
        goto next;
    }
    else if(choice=='N'){
        goto ans;
    }
    
    ans: printf("%.2f",result);
    invalid:
    return 0;
}