#include<stdlib.h>
#include<stdio.h>
void main(){
int *p,*i;
int lt;
scanf("%d",&lt);
p=(int *)malloc(lt*sizeof(int));
for(i=p;i<p+lt;i++)
	scanf("%d",i);
for(i=p;i<p+lt;i++)
	printf("%d",*i);
}
