#include<stdio.h>
void main(){
	int h=10, *g;
	g= &h;
	printf("%d",*g);
	printf("%p",g);
}
