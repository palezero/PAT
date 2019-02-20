#include<stdio.h>
#include<string.h>
#define len 1001
int level[len];
char team[3]="WTL",output[3];
int main()
{
	int i,j,s;
	float temp=0,max,sum=1;
	for(j=0;j<3;j++)
	{
		max=0;
		s=-1;
		for(i=0;i<3;i++)
		{
			scanf("%f",&temp);
			if(temp>max)
			{
				max=temp;
				s++;
			}
		}
		output[j]=s;
		sum*=max;
	}
	printf("%c %c %c ", team[output[0]],team[output[1]],team[output[2]]);
	printf("%.2f",2*(sum*0.65-1));
	return 0;
}