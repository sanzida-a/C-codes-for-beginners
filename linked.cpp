#include <stdio.h>
struct student {
	int id;
	struct student *next;
};
void display(struct student *temp)
{
	while(temp!=NULL)
	{
		printf("%d\n",temp->id);
	temp=temp->next;
	}
}
int main(){
	int ;
	struct student *head = NULL;
	struct student s1;
	struct student s2;
	struct student s3;
	struct student *temp;
	s1.id = 1;
	s1.next = NULL;
	// add to linklist
	head = &s1;

	// create student

	s2.id = 2;
	s2.next = NULL;
	// add to linklist
	////s1.next = &s2;
    head->next = &s2;
    s3.id=3;
    s3.next=NULL;
    head->next->next=&s3;
	head->next->next->next=NULL;
	//printf("%d %d %d",head->iNd, head->next->id,head->next->next->id);
	display(head);

	getchar();
	return 0;
}
