#include <stdio.h>

float f1(float, float);

int main()
{
	float num1, num2;
	float avg;
	
	printf("ù��° ���ڸ� �Է��ϼ���. : ");
	scanf("%f",&num1);
	printf("�ι�° ���ڸ� �Է��ϼ���. : ");
	scanf("%f",&num2);
	
	avg = f1(num1, num2);
	
	printf("%f�� %f�� �����, %f �Դϴ�.",num1,num2,avg);
	
	return 0;
} 

float f1(float num1, float num2)
{
	return (num1+num2)/2.0;
}
