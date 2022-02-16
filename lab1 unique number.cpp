#include<stdio.h>
#include<conio.h>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	int i=0,n,tm;
	set<int> s;
	printf("Enter the size of the array\n");
	scanf_s("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf_s("%d",&tm);
		s.insert(tm);

	}
	printf("Number of unique numbers : %d\n",s.size());
	_getch();
	return 0;
}