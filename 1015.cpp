#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
char trans[17];
bool f[1000];
bool z(int num)
{
    int i=0,j,flag;
    if(num==1||num==0)
        return false;
    for(i=2;i<num;i++)
    {
        if(!(num % i))
            return false;
    }
    return true;
}
int t(int num,int m)
{
    char i=0,j;
    int sum=0;
    while(1)
    {
        trans[i++] = num % m;
        if(!(num/=m))
            break;
    }
    j=i-1;
    while(i--)
        sum += trans[i]*pow(m, j-i);
    return sum;
}

int main()
{
    int num,m,count=0;
    memset(trans,0,sizeof(trans));
    memset(f,0,sizeof(f));
    while(1)
    {
        scanf("%d", &num);
        if (num < 0)
            break;
        scanf("%d", &m);
        if(m < 0)
            break;
        else
            f[count++]=(z(num)&&z(t(num,m)))?true:false;
    }
   for(m=0;m<count;m++)
    {
        if(f[m])
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}