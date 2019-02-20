#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    vector<int> road;
    vector<int> dis;
    int num,temp,input_i,input_j,sum_z,sum_f,sum=0,i;
    scanf("%d",&num);
    road.push_back(0);
    while(num--)
    {
        scanf("%d",&temp);
        road.push_back(temp);
    }
    for(i=0;i<road.size();i++)
        sum+=road[i];
    scanf("%d",&num);
    while(num--)
    {
        sum_z=0;
        scanf("%d%d",&input_i,&input_j);
        if(input_j<input_i)
        {
            input_i += input_j;
            input_j = input_i - input_j;
            input_i -= input_j;
        }
        for(i=input_i;i<input_j;i++)
            sum_z+=road[i];
        sum_f=sum-sum_z;
        dis.push_back(sum_z>=sum_f?sum_f:sum_z);
    }
    for(num=0;num<dis.size();num++)
    {
        printf("%d",dis[num]);
        if(num!=dis.size()-1)
            printf("\n");
    }
    return 0;
}
