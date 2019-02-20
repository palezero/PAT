#include <cstdio>
#include <cmath>
#include <cstring>
#define len 100005
int s[len];//一定要用int类型的,char不够用
int cnt[len];
int main()
{
    int num,i,j,temp;
    memset(s,0,sizeof(s));
    memset(cnt,0,sizeof(cnt));
    scanf("%d",&num);        
    for(i=0;i<num;i++)
    {
        scanf("%d",&s[i]);
        cnt[s[i]]++;
    }
    temp=-1;
    for(i=0;i<num;i++)
    {
        if(cnt[s[i]]==1)
        {
            temp=s[i];
            break;
        }
    }
    if(temp==-1)
        printf("None\n");
    else
        printf("%d\n",temp);
    return 0;
}