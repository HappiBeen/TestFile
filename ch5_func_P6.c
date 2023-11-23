#include <stdio.h>

int get_max2(int, int);
int get_max3(int, int, int);

int main()
{
	int num1, num2, num3;
	int max2, max3;
	
	printf("num1: ");
	scanf("%d",&num1);
	printf("num2: ");
	scanf("%d",&num2);
	printf("num3: ");
	scanf("%d",&num3);
	
	max2 = get_max2(num1, num2);
	printf("%d, %d 중 큰 수는 %d \n", num1,num2,max2);

	max3 = get_max3(num1, num2, num3);
	printf("%d, %d, %d 중 큰 수는 %d \n", num1,num2,num3, max3);
	
	return 0;
}


int get_max2(int x, int y)
{
	int max2;
	
	if (x<=y)
	{
		max2=y;
	}
	else
	{
		max2=x;	
	}
	return max2;
}

int get_max3(int x, int y, int z)
{
	int max3;
	
	if(x<y)
		if(y<z)
		max3=z;
		else
		max3=y;
	else
	{
		max3=x;
	}
	return max3;
}
