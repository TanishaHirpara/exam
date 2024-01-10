#include<stdio.h>
main()
{
	int i,j,k;
	for(i=10;i>=6;i--)
	{
		for(k=i;k<=9;k++)
		{
			printf(" ");
	}
		for(j=i;j>=6;j--)
		{
			printf("%d" ,j);
		}
		printf("\n");
	}
}
