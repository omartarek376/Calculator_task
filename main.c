// this is the main code
#include <stdio.h>

float sub_fun (float in1 , float in2);
float divide(float,float);
float add (float x,float y);

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
