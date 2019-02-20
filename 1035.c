#include <stdio.h>
#include <string.h>
char pw[2000][12];
char id[2000][12];
char flag[2000];
int main()
{
    int i,j,k,count=0;
    char fl=0;
    scanf("%d",&i);
    memset(pw,0,sizeof(pw));
    memset(id,0,sizeof(id));
    memset(flag,0,sizeof(flag));
    for(j=0;j<i;j++)
    {
        scanf("%s%s", *(id + j), *(pw + j));
        for(k=0;k<strlen(*(pw + j));k++)
        {
            fl=0;
            if(*(*(pw+j)+k)=='1')
                *(*(pw+j)+k)='@';
            else if(*(*(pw+j)+k)=='0')
                *(*(pw+j)+k)='%';
            else if(*(*(pw+j)+k)=='l')
                *(*(pw+j)+k)='L';
            else if(*(*(pw+j)+k)=='O')
                *(*(pw+j)+k)='o';
            else
                fl=1;
            if(!fl)
                flag[j]=1;
        }
    }
    fl=0;
    for(j=0;j<i;j++)
    {
        if(flag[j])
            count++;
    }
    if(count)
        printf("%d\n",count);
    for(j=0;j<i;j++)
    {
        if(flag[j])
        {
            printf("%s %s\n", *(id + j), *(pw + j));
            fl=1;
        }
    }
    if(!fl)
    {
        if(i!=1)
            printf("There are %d accounts and no account is modified",i);
        else
            printf("There is 1 account and no account is modified");
    }
    return 0;
}