#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c;
	float avg;
	printf("enter a number :\n");
	scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("the avg of number %f ",avg);
	return 0;
}
