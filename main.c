// this is the main code
#include <stdio.h>

float sub_fun (float in1 , float in2);
float divide(float,float);
float add (float x,float y);
float mul(float num1,float num2);
float module(float num1,float num2);

int main()
{
	
    float a;
	float b;
	float result;
	int choice = 0;

	while(choice != 6)
	{

	printf("\nPlease choose the operation: \n1)add \n2)sub \n3)multiply \n4)divide \n5)modulus \n6)exit \n");
	scanf("%d",&choice);


    switch(choice)
	{
		case 1:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = add(a,b);
	    printf("Result of = %f", result);
		break;

		case 2:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = sub_fun(a,b);
	    printf("Result of = %f", result);
		break;

		case 3:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = mul(a,b);
	    printf("Result of = %f", result);
		break;

		case 4:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = divide(a,b);
	    printf("Result of = %f", result);
		break;

		case 5:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = module(a,b);
	    printf("Result of = %f", result);
		break;

		case 6:
		printf("Exiting program \n");
		break;

		default:
		printf("invalid argument \n");
	}
	}
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
    mulResult=num1*num2;
    return mulResult;
} 


float module(float num1,float num2)
{
	if(num1!=0)
	{
		return num1-(int)(num1/num2)*num2;
	}
	else
	{
		printf("can not calculate modular with zero devisor\n");
		return 0;
	}
}
