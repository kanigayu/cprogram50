#include<stdio.h>
int main()
{
	int a[20],i,min;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<=10;i++)
	{
	if(min>a[i])
	{
	min=a[i];	
	}
	}
	printf("\n %d",min);
	return 0;
}

