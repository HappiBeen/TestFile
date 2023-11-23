#include <stdio.h>

void f1();  
void f2(); 

int main()
{
	int i;
	f1();
	for(i=1; i<9; i++)
	{
	 f2();
	}
	f1();
} 

void f1()
{
	printf("/**********/\n");
}

void f2()
{
	printf("/    **    /\n");
}


