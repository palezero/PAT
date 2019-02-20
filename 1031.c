#include<stdio.h>
#include<string.h>
#include<math.h>
#define L 1001
char str[L];
int main()
{
	int i,j,len,sq;
	scanf("%s",str);
	len=strlen(str);
	sq=(int)ceil(len/3.0);
	for(i=0;i<sq;i++)
	{
		printf("%c",str[i]);
		for(j=0;j<len-2*sq;j++)
		{
			if(i==sq-1)
				printf("%c",str[i+j+1]);
			else
				printf(" ");
		}
		printf("%c\n",str[len-i-1]);
	}	
	return 0;
}