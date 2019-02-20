#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
void strrev1(char *str)//字符串反转
{
	int i,len = strlen(str);
	char *new_str = (char*)malloc(len+1);
	for(i=0;i<len;i++)
		new_str[i]=str[len-1-i];
	new_str[len]='\0';
	strcpy(str,new_str);
	free(new_str);
}

void jinwei(char *num)//进位函数
{
	char num_cat[]="1";
	strcat(num_cat,num);
	strcpy(num,num_cat);
}

void add(char *num,char *num2, char *sum)//两个数相加
{
	int len,len2=0,i;
	len=strlen(num);
	len2=strlen(num2);
	if(len>=len2)
	{
		for(i=0;i<len2;i++)
			num[len-i-1] = num2[len2-i-1]+num[len-i-1]-0x30;//求和
		for(i=len-1;i>0;i--)
			if(num[i]>'9')
			{
				num[i]-=10;
				num[i-1]++;
			}
		if(num[0]>'9')
		{
			num[0]-=10;
			jinwei(num);
		}
	    strcpy(sum,num);
	}
	else
	{
		for(i=0;i<len;i++)
			num2[len2-i-1] = num[len-i-1]+num2[len2-i-1]-0x30;//求和
		for(i=len2-1;i>0;i--)
			if(num2[i]>'9')
			{
				num2[i]-=10;
				num2[i-1]++;
			}
		if(num2[0]>'9')
		{
			num2[0]-=10;
			jinwei(num2);
		}
		strcpy(sum,num2);
	}
}

bool isrev(char *num)//判断一个数反向后是否相等
{
	char num2[11];
	strcpy(num2,num);
	strrev1(num2);
    return !strcmp(num2,num);//相等的话返回0
}

int main()
{
    char N[20],temp[20],temp1[20];
    int K,count=0;
    scanf("%s%d",N,&K);
    while(!isrev(N)) 
    {
    	strcpy(temp,N);
    	strcpy(temp1,N);
    	strrev1(temp);
    	add(temp,temp1,N);
    	count++;	
    	if(count==K)
    		break;
    }
    printf("%s\n%d",N,count);
    return 0;
}