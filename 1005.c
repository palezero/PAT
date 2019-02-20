#include<stdio.h>
#include<string.h>
char *str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char input[1001];
void print(unsigned int i);
void count(unsigned int i);
int num=0;
int main()
{
	unsigned int sum=0,i;
	scanf("%s",input);
	for(i=0;i<strlen(input);i++)
		sum+=input[i]-0x30;
	count(sum);
	print(sum);
	return 0;
}

void count(unsigned int i)
{
	if(i)
	{
		num++;
		count(i/10);
	}
	else if((!i)&&(!num))
		printf("%s", "zero");
}
void print(unsigned int i)
{
	if(i)
	{
		print(i/10);
		printf("%s",str[i%10]);
		num--;
		if(num)
			putchar(' ');
	}
}