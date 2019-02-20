#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int bs(int* coins, int half, int number_coin)
{
    int low,high,middle;
    low = 0;
    high = number_coin-1;
    while(low<=high)
    {
        middle = (low+high)/2;
        if(half > coins[middle])
            low = middle + 1;
        else if(half < coins[middle])
            high = middle - 1;
        else 
            return middle;
    }
}

int main()
{
    int coin,money,i,j;
    int coins[100005];
    scanf("%d%d",&coin,&money);
    for(i=0;i<coin;i++)
        scanf("%d",&coins[i]);
    sort(coins,coins+coin);//对硬币的面值进行排序
    
    //思路：先通过二分查找找出中间值 
    printf("order = %d\n, value = %d",bs(icoins,money/2,coin),coins[bs(coins,money/2,coin)]);

    // for(i=0;coins[i]<=money/2;i++)
    // {
    //     for(j=coin-1;(coins[j]>=money/2)&&(coins[j]<=money);j--)
    //         if((coins[j]==(money-coins[i]))&&i!=j)
    //         {
    //             printf("%d %d",coins[i],coins[j]);
    //             return 0;
    //         }
    // }
    // printf("No Solution");
    return 0;
}