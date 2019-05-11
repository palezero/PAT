
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;char c;
    while(cin>>n>>c)
    {
        int i=1;
        while(2*i*i-1<=n)
            i++;
        int temp=n-(2*(i-1)*(i-1)-1);//剩下的字符数；
        i--;
        for(int j=i;j>0;j--)
            cout<<string(i-j,' ')<<string(2*j-1,c)<<endl;
        for(int j=2;j<=i;j++)
            cout<<string(i-j,' ')<<string(2*j-1,c)<<endl;
        cout<<temp<<endl;
    }
}