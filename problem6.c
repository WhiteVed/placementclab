//average of numbers
#include<stdlib.h>
#include<stdio.h>
void main(){
int *p,*i;
int lt;
float a=0;
scanf("enter the limit %d",&lt);
p=(int *)malloc(lt*sizeof(int));
for(i=p;i<p+lt;i++)
	scanf("enter the value %d",i);

for(i=p;i<p+lt;i++)
	a=a+*i;
a=a/lt;
printf("value is %f",a);
}
