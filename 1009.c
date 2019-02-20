#include<stdio.h>
#include<string.h>
#define len 10001//1001 is so small that can not pass the judging
float x[len],output[len];//xishu
int main()
{
	int i,j,n1,n2,m,max_m=0,max=0,count=0;
	float temp;
	memset(x,0,sizeof(x));
	memset(output,0,sizeof(output));
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&m);
		scanf("%f",&x[m]);
		if(m>max_m)
			max_m=m;//zuidacimi
	}
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&m);
		scanf("%f",&temp);
		for(j=0;j<=max_m;j++)
		{
			output[j+m]+=temp*x[j];
			if(j+m>max)
				max=j+m;
		}
	}
	for(i=0;i<=max;i++)
		if(output[i])
			count++;
	printf("%d",count);
	for(i=max;i>=0;i--)
	{
		if(output[i])
		{
			printf(" %d",i);
			printf(" %.1f",output[i]);
		}
	}
	return 0;
}