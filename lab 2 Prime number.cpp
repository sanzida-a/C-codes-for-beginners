#include<stdio.h>
#include<conio.h>
int prime(int n,int j);
int main()
{
	int n;
	scanf_s("%d", &n);
	int x = prime(n,n/2);
	if (x==1)                                           
		printf("%d is a prime number ",n);
	else
		printf("%d is not a prime number ",n);
	_getch();
	return 0;
}
int prime(int n,int j)
{
	if (j==1)
	{
		return 1;
	}
	else
	{
		if (n%j==0)
		{
			return 0;
		}
		else
		{
			return prime(n,j-1);
		}
	}
}