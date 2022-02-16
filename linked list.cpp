#include <stdio.h>
#include<stdlib.h>
struct student {
	int id;
	struct student *next;
};
struct student *head = NULL;
void display(struct student *temp)
{
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
int main(){
	
	addlast(1);
	addlast(2);
	addfirst(9);
	display(head);
	getchar();
	return 0;
}
