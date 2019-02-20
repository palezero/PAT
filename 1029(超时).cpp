#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> line;
    int l1,l2,i1,i2,i,mid,k;
    scanf("%d",&l1);
    for(i1=0;i1<l1;i1++)
    {
        scanf("%d", &i);
        line.push_back(i);
    }
    scanf("%d",&l2);
    if(l1<l2)
    {
        mid=(l1+l2)/2+1;
        for(i=0;i<mid-l1;i++)
        {
            scanf("%d", &i);
            line.push_back(i);
        }
    }
    else
        mid=l1;
    sort(line.begin(),line.end());
    for(i2=0;i2<l1+l2-mid;i2++)
    {
        scanf("%d",&i);
        for(k=0;k<mid;k++)
            if(i<line[k])
            {
                line.pop_back();
                line.insert(line.begin()+k,i);
                break;
            }
    }
    if((l1+l2)%2)
        printf("%d",line[(l1+l2)/2]);
    else
        printf("%d",line[(l1+l2)/2-1]);
    return 0;
}