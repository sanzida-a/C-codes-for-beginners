#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,a[5],t,k;
	scanf_s("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf_s("%d",&a[k]);
	}
	for(j=1;j<=n-1;j++)
	{
		t=a[j];
		i=j-1;
		while((i>=0) && (a[i]<t))
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=t;
	}
	for(k=0;k<n;k++)
	{
		printf("%d\n",a[k]);
	}
	_getch();
	return 0;
}

