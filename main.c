// this is the main code

#include <stdio.h>
float mul(){
    float num1,num2;
    float mulResult;
printf("enter number 1:");
    scanf("%f",&num1);
    printf("enter number 2:");
    scanf("%f",&num2);
    mulResult=num1*num2;
    printf("result=%f\n",mulResult);
    return mulResult;
}
int main()
{


    float mul_result=mul();


    return 0;
}
