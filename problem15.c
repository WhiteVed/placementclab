


#include<stdio.h>
void main()
{
	int i,j,q=0;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
		printf("%d",k);
		}
		printf("\n");
	}
}
