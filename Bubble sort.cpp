#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n,a[5],t;
	scanf_s("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf_s("%d",&a[k]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(k=0;k<n;k++)
	{
		printf("%d\n",a[k]);
	}
	_getch();
	return 0;
}

