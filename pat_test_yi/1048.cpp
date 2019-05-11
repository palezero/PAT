#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
    string s1, s2;
    cin>>s1>>s2;
    int l1 = s1.size(), l2 = s2.size();
    if(l1 > l2) {
        string dlc(l1-l2, '0');
        s2 = dlc + s2;
        l2 = l1;
    }
    for(int i = 0; i < l1; ++i) {
        if((i+1) % 2 == 1) {
            s2[l2-1-i] = (s1[l1-1-i] - 0x30 + s2[l2-1-i] - 0x30) % 13 +0x30;
            if(s2[l2-1-i] == ('9' + 1))
                s2[l2-1-i] = 'J';
            else if(s2[l2-1-i] == ('9' + 2))
                s2[l2-1-i] = 'Q';
            else if(s2[l2-1-i] == ('9' + 3))
                s2[l2-1-i] = 'K';
        }
        else {
            s2[l2-1-i] = s2[l2-1-i] - s1[l1-1-i] + 0x30;
            if(s2[l2-1-i] < '0')
                s2[l2-1-i] += 10;
        }
    }
    cout<<s2;
    return 0;
}

	