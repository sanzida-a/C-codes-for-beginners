#include <stdio.h>
#include<conio.h>
#include<algorithm>
#include<vector>
using namespace std;
int fun(int n, vector<int> a);
int main()
{
	int i, tm, n;
	vector<int> v;
	scanf_s("%d", &n);

	for (i = 0;i<n;i++)
	{
		scanf_s("%d", &tm);
		v.push_back(tm);
	}
	int j = fun(n-1, v);
	printf("Sum is %d",j);
	_getch();
	return 0;
}


int fun(int n, vector<int> a)
{
	int sum= 0;
	if (n==0)
		return a[0];
	else
		return a[n]+fun(n-1,a);

}


