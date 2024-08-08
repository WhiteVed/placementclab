


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
struct link *start ,*node, *temp,*prev;
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

temp=start;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
while(x==1){
//delete at end
printf("do you want to delete if y press 1 else the any another ");
scanf("%d",&x);
temp=start;
while(temp!=NULL)
{
printf("%d\n",temp->data);
prev=temp;
temp=temp->next;
}
prev=NULL;
}
temp=start;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}
