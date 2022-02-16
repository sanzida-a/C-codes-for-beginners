#include<stdio.h>
#include<conio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,tm,i,count=0;
	vector<int> v1;
	vector<int> v2;
	printf("Enter the size of an array\n");
	scanf_s("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf_s("%d",&tm);
		v1.push_back(tm);
	}
	for(i=0;i<n;i++)
	{
		v2.push_back(v1[i]);
	}
	sort(v2.begin(),v2.end());
		for(i=0;i<n;i++)
	{

		if(v1[i]==v2[i])
			count++;
	
	}
	if(count==n)
		printf("sorted");
	else
		printf("not sorted");
	_getch();
	return 0;
	}
	


