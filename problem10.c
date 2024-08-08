
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
int key;
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
start=node;
node->next=temp;
temp=start;
}

printf("insert at point starts \n");
node=(struct link *)malloc(sizeof(struct link));
printf("enter the key");
scanf("%d",&key);
printf("enter the value ");
scanf("%d",&node->data);
temp=start;

while(temp!=NULL)
{
if (key==temp->data){
		node->next=temp->next;
		temp->next=node;
}
temp=temp->next;
}

temp=start;
while(temp!=NULL){
printf("%d->",temp->data);
temp=temp->next;
}
}
