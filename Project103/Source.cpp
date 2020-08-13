#include<stdio.h>
int main()
{
	int x, oddcount = 0, oddsum = 0, evencount = 0, evensum = 0;
	do
	{
		printf("input number(last number=0) : ");
		scanf_s("%d", &x);
		if (x % 2 == 0) {
			evencount++; evensum = evensum + x;
		}
		else {
			oddcount++; oddsum = oddsum + x;
		}
	}
		while (x != 0);
		printf("sum of %d even numbers=%d\n", evencount, evensum);
		printf("sum of %d odd numbers=%d\n", oddcount, oddsum);
		return 0;
	}