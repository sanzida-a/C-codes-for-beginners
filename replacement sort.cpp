#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n,a[5],tem;
	scanf_s("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf_s("%d",&a[k]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				tem=a[i];
				a[i]=a[j];
				a[j]=tem;
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

