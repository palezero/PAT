#include <cstdio>
#include <cmath>
#define ull unsigned long long
ull num_r(ull num)
{
    ull temp=0,bak;
    char count=0;
    bak=num;
    while(num/=10)
        count++;    
    num=bak;
    while(1)
    {
        temp+=(num%10*pow(10,count));
        count--;
        if(!(num/=10))
            break;
    }
    return temp;
}

bool r(ull num,ull num_v)
{
    return (num==num_v)?true:false;
}

int main()
{
    char step,count=0;
    ull num;
    scanf("%llu%d",&num,&step);
    while(!r(num,num_r(num)))
    {
        num+=num_r(num);
        count++;
        if(count>=step)
            break;
    }
    printf("%llu\n%d",num,count);
    return 0;
}