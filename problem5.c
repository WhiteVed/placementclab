//read element in the revese order
#include<stdlib.h>
#include<stdio.h>
void main(){
int *p,*i;
int lt;
scanf("%d",&lt);
p=(int *)malloc(lt*sizeof(int));
for(i=p;i<p+lt;i++)
	scanf("%d",i);
for(i=p+lt-1;i>p-1;i--)
	printf("%d",*i);
}
