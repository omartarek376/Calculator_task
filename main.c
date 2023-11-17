// this is the main code
#include <stdio.h>

float sub_fun (float in1 , float in2);
float divide(float,float);
float add (float x,float y);
float mul(float num1,float num2);

int main()
{
  float a;
	float b;
	float result;

	printf("Please enter 2 numbers:\n");
	scanf("%f %f",&a,&b);

	result = add(a,b);
	printf("Result of sum = %f", result);

	return 0;
}










float divide(float x, float y)
{
    if ( y == 0)
    {
        printf("Error division by zero");
        return 0;
    }

    return x / y;

}

float sub_fun (float in1 , float in2)
{

	return (in1-in2);
}

float add (float x,float y){
	float sum;
	sum= x+y;
	return sum;
}
  
  
float mul(float num1,float num2){
    float mulResult;
printf("enter number 1:");
    scanf("%f",&num1);
    printf("enter number 2:");
    scanf("%f",&num2);
    mulResult=num1*num2;
    printf("result=%f\n",mulResult);
    return mulResult;
} 
