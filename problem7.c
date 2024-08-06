
#include<stdlib.h>
#include<stdio.h>
void main(){
int *p,*i;
int lt;
int a;
scanf("%d",&lt);
p=(int *)malloc(lt*sizeof(int));
for(i=p;i<p+lt;i++)
	scanf("%d",i);
for(i=p+lt-1;i>p-1;i--){
	 a = *i;
if (a==1) printf ("one\t");
else if (a==2) printf ("two\t");
else if (a==3) printf ("three\t");
else if (a==4) printf ("four\t");
else if (a==5) printf ("five\t");
else if (a==6) printf ("six\t");
else if (a==7) printf ("seven\t");
else  if (a==8) printf ("eight\t");
else if (a==9) printf("nine\t");
else printf("zero") ;
}
}
