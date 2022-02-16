#include<stdio.h>
#include<conio.h>
int main()
{
	int low=0,high=6,mid=0,a[7],i,key;
	printf("Enter the 7 num\n");
	for(i=0;i<7;i++)
	{
		scanf_s("%d",&a[i]);
	}
	printf("Enter the search key\n");
	scanf_s("%d",&key);
	for(i=0;i<7;i++)
	{
		mid=(low+high)/2;
		if(a[mid]==key){
			printf("found  %d\n",mid+1);
		break;
		}
		if(a[mid]>key)
			high=mid-1;
		if(a[mid]<key)
			low=mid+1;
	}
	_getch();
	return 0;
}

