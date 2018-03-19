#include<stdio.h>
int main()
{
	int x,y,z,ap,sum=0,i;
	scanf("%d\t%d\t%d",&x,&y,&z);
	ap=x;
	for(i=0;i<z;i++)
	{
		printf("%d",ap);
		sum=sum+ap;
		ap=ap+y;
	}
printf("\nthe sum is %d",sum);
return 0;
}
