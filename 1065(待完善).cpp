#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
void solve(string a,string b,string c, char num)
{
    if(a[0]=='-'&&b[0]=='-')

    else if(a[0]!='-'&&b[0]=='-')

    else if(a[0]=='-'&&b[0]!='-')

    else

}

int main()
{
    char c,i,j;
    string str;
    vector<bool> b;
    vector<string> n;
    str.resize(100);
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%s",str);
            n.push_back(str);
        }
        solve(n[0],n[1],n[2],i);
    }
    return 0;
}