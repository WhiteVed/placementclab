
#include<stdio.h>
#include<stdlib.h>
struct link {
int data;
struct link *next;
};
void main()
{
int i=0;
int x=1;
struct link *start ,*node, *temp;
node=(struct link *)malloc(sizeof(struct link));
start=node;
temp=node;
printf("enter the: number");
scanf("%d",&node->data);
node->next=NULL;
while(i<5){
i++;
node=(struct link *)malloc(sizeof(struct link));
printf("enter the number");
scanf("%d",&node->data);
temp->next=node;
temp=node;

}
node->next=NULL;
temp=start;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}
