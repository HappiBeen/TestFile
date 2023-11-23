#include <stdio.h>

float div(float, float);
float fpower(float, float);

int main()
{
	float num1, num2;
	float result,result2;
	
	printf("num1: ");
	scanf("%f",&num1);
	printf("num2: ");
	scanf("%f",&num2);	
	
	result=div(num1,num2);
	printf("%f / %f = %f\n",num1,num2,result);
	result2=fpower(num1,num2);
	printf("%f ^%f = %f\n",num1,num2,result2);
	return ;
}

float div(float start, float end)
{
	return start/end;
}

float fpower(float start, float end)
{
	float i;
	float ens=1;
	for(i=0; i<end; i++)
	{	
		ens = ens * start;
	}
	return ens;
}

