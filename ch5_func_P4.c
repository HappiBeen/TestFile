#include <stdio.h>

void add(); 

int main()
{
	add();
	return 0;
}


void add()
{	
	int num1, num2;
	int i;
	int sum=0;
	
	printf("start : ");
	scanf("%d",&num1);
	printf("end : ");
	scanf("%d",&num2);
		
	
	for(i=num1; i<=num2; i++)
	{	
		sum = sum + i;
	}	
	
	printf("%d���� %d������ ��: %d", num1,num2,sum);
}
//���� �޶�����?
 
