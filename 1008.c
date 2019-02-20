#include<stdio.h>
#include<string.h>
#define len 1001
int level[len];
int main()
{
	unsigned int i=0,sum=0,count;
	memset(level,0,sizeof(level));
	scanf("%d",&count);
	for(i=0;i<count;i++)
		scanf("%d",&level[i]);
	sum+=count*5;
	for(i=0;i<count-1;i++)
	{
		if(level[i+1]>level[i])
			sum+=((level[i+1]-level[i])*6);
		else if(level[i+1]<level[i])
			sum+=((level[i]-level[i+1])*4);
	}
	sum+=level[0]*6;
	printf("%d", sum);
	return 0;
}