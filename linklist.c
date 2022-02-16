#include <stdio.h>
struct student {
	int id;
	struct student *next;
};
int main(){
	struct student *head = NULL;
	// create student
	struct student s1;
	struct student s2;
	struct student s3;
	s1.id = 1;
	s1.next = NULL;
	// add to linklist
	head = &s1;

	// create student

	s2.id = 2;
	s2.next = NULL;
	// add to linklist
	//s1.next = &s2;
    head->next = &s2;
    s3.id=3;
    s3.next='\0';
    head->next->next=&s3;
	printf("%d %d %d",head->id, head->next->id,head->next->next->id);


	getchar();
	return 0;
}
