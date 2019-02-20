#include<stdio.h>
#include<string.h>
#define length 1001
double temp,line1[length],line2[length],sum[length];
int main()
{
	int l1,l2,i,order,count=0;
	memset(line1,0,sizeof(line1));
	memset(line2,0,sizeof(line2));
	scanf("%d",&l1);
	for(i=0;i<l1;i++)
	{		
		scanf("%d%lf",&order,&temp);
		line1[order]=temp;
	}
	scanf("%d",&l2);
	for(i=0;i<l2;i++)
	{
		scanf("%d%lf",&order,&temp);
		line2[order]=temp;
	}
	for(i=0;i<length;i++)
	{
		sum[i]=line1[i]+line2[i];
		if(sum[i]!=0)
			count++;
	}
	printf("%d",count);
	for(i=length-1;i>=0;i--)
		if(sum[i]!=0)
			printf(" %d %.1f",i,sum[i]);
	return 0;
}
 
