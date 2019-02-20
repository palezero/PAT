#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int coin,money,i,j;
    int coins[100005];
    scanf("%d%d",&coin,&money);
    for(i=0;i<coin;i++)
        scanf("%d",&coins[i]);
    sort(coins,coins+coin);
    for(i=0;coins[i]<=money/2;i++)
    {
        for(j=coin-1;(coins[j]>=money/2)&&(coins[j]<=money);j--)
            if((coins[j]==(money-coins[i]))&&i!=j)
            {
                printf("%d %d",coins[i],coins[j]);
                return 0;
            }
    }
    printf("No Solution");
    return 0;
}