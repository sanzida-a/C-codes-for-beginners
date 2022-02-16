#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,t,tem,a[5],n;
	scanf_s("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf_s("%d",&a[i]);
	}
	for(j=n-1;j>0;j--)
	{
		t=0;
		for(k=1;k<=j;k++)
		{
			if(a[k]>a[t])
			{
				t=k;
			}
		}
		tem=a[j];
		a[j]=a[t];
		a[t]=tem;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	_getch();
	return 0;
}

