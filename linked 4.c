#include <stdio.h>
#include<stdlib.h>
struct student {
	int id;
	struct student *next;
};
struct student *head = NULL;
void display(struct student *temp)
{
	if(temp==NULL)
		printf("Empty");
	else
	while(temp!=NULL)
	{
		printf("%d",temp->id);
	temp=temp->next;
	}
	printf("\n");
}
void addfirst(int id)
{
	struct student *tem= (struct student *)malloc(sizeof(struct student));
	tem->id=id;
	tem->next=head;
	head=tem;

}
void addlast(int id)
{
	struct student *p=NULL;
	struct student *temp = (struct student *)malloc(sizeof(struct student));
	temp->id=id;
	temp->next = NULL;
	if(head==NULL)
		head=temp;
	else
	{
		p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=temp;
	}
}
void removelast()
{
	struct student  *temp;
	temp=head;
	if(temp->next==NULL)
		head=NULL;
	else
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
		}
			temp->next=NULL;
}
void removefirst()
{
	struct student *temp;
	temp=head;
	head=temp->next;
}

void insertafter(int id,int newid)
{
	struct student *temp = (struct student *)malloc(sizeof(struct student));
	struct student *p;
	p=head;
	temp->id=newid;
	temp->next = NULL;
	while(p->id!=id)
	{
		p=p->next;
	}
	temp->next=p->next;
	p->next=temp;
}


int main(){

	addlast(1);
	display(head);
	addlast(2);
	display(head);
	addfirst(9);
	display(head);
	insertafter(2,10);
	display(head);
	getchar();
	return 0;
}





