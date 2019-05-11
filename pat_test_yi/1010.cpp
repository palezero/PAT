#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    int c, p;
    int box[100004];
    int find[100004];
    int count = 0;
    memset(find, -1, 100004 * sizeof(int));
    while(cin>>c>>p) {
        box[p-1] = c * p;
        find[count] = p;
        count++;
    }
    count = 0;
    bool flag = 0;
    bool zero = 0;
    while(find[count] != -1) {
        if(find[count] > 0) {
        	if(flag)
        		printf(" ");
        	else flag = 1;
        	if(box[find[count] - 1] != 0)
        		zero++;
            cout << box[find[count] - 1] << " " << find[count] - 1;
        }
        count++;
    }
    if(!zero) cout<<"0 0"; // 全零情况，如果所有的系数都为0 那么就是输出0 0
    return 0;
}