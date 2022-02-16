#include<stdio.h>
#include<conio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,tm,i,count=0,k;
	vector<int> v1;
	printf("Enter the size of an array\n");
	scanf_s("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf_s("%d",&tm);
		v1.push_back(tm);
	}
	sort(v1.begin(),v1.end());
	k=v1[0];
		for(i=0;i<n;i++)
	{
		if(v1[i]==k)
			count++;
		k=v1[i+1];
	}
	if(count==n)
		printf("sorted");
	else
		printf("not sorted");
	_getch();
	return 0;
	}
	


