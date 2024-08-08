

#include<stdio.h>
void main()
{
	int i,j,q=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<5-i;k++)
		{
		printf("%d",i+1+k);
		}
		printf("\n");
	}
}
