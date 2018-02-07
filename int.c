#include<stdio.h>
int main()
{
	int a,hour,minute;
	scanf("%d",&a);
	if(a!=0)
	{
		hour=a/60;
		minute=a%60;
		printf("%d %d",hour,minute);
	}
	return 0;
}
