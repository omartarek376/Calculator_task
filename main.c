// this is the main code

#include <stdio.h>

float module(float num1,float num2);


int main()
{
	float x=8.0,y=6.0;
	
	//scanf("%f",&x);
	//scanf("%f",&y);
	float resul;
	resul=module(x, y);
	
	printf("resul= %f",resul);
    return 0;
	
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