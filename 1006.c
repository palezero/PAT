#include<stdio.h>
#include<string.h>
#define len 1001
char ID[len][15];
char in[len][8];
char out[len][8];
int main()
{
	int i,M,shi,ge,min,max,mini=0,maxo=0,tempi,tempo;
	scanf("%d",&M);
	for(i=0;i<M;i++)
	{
		tempi=0;
		tempo=0;
		scanf("%s",*(ID+i));
		scanf("%s",*(in+i));
		shi=*(*(in+i))-'0';
		ge=*(*(in+i)+1)-'0';
		tempi+=3600*(shi*10+ge);
		shi=*(*(in+i)+3)-'0';
		ge=*(*(in+i)+4)-'0';
		tempi+=60*(shi*10+ge);
		shi=*(*(in+i)+6)-'0';
		ge=*(*(in+i)+7)-'0';
		tempi+=1*(shi*10+ge);
		scanf("%s",*(out+i));
		shi=*(*(out+i))-'0';
		ge=*(*(out+i)+1)-'0';
		tempo+=3600*(shi*10+ge);
		shi=*(*(out+i)+3)-'0';
		ge=*(*(out+i)+4)-'0';
		tempo+=60*(shi*10+ge);
		shi=*(*(out+i)+6)-'0';
		ge=*(*(out+i)+7)-'0';
		tempo+=1*(shi*10+ge);
		if(!i)
		{
			min=tempi;
			max=tempo;
		}
		else
		{
			if(tempi<min)
			{
				min=tempi;
				mini=i;
			}
			if(tempo>max)
			{
				max=tempo;
				maxo=i;
			}
		}
		//printf("%d %d\n",tempi,tempo);
	}
	printf("%s %s",*(ID+mini),*(ID+maxo));
	return 0;
}