// this is the main code
float sub_fun (float in1 , float in2);
#include <stdio.h>

float divide(float,float);

int main()
{
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

