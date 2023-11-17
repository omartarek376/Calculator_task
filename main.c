#include<stdio.h>


float add (float x,float y){
	float sum;
	sum= x+y;
	return sum;
}

int main(){
	//setvbuf(stdout, NULL, _IONBF, 0);  
	//setvbuf(stderr, NULL, _IONBF, 0);

	float a;
	float b;
	float result;

	printf("Please enter 2 numbers to get the sum:\n");
	scanf("%f %f",&a,&b);

	result = add(a,b);
	printf("Result of sum = %f", result);

	return 0;
}

