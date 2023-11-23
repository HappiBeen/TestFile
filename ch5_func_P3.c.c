#include <stdio.h>

float f1(float, float);

int main()
{
	float num1, num2;
	float avg;
	
	printf("첫번째 숫자를 입력하세요. : ");
	scanf("%f",&num1);
	printf("두번째 숫자를 입력하세요. : ");
	scanf("%f",&num2);
	
	avg = f1(num1, num2);
	
	printf("%f와 %f의 평균은, %f 입니다.",num1,num2,avg);
	
	return 0;
} 

float f1(float num1, float num2)
{
	return (num1+num2)/2.0;
}
