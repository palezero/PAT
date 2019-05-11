#include <iostream>
#include <string>
using namespace std;
string tim[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main() {
    string s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    int xingqi = 0, hour = 0, minute = 0;
    int min = s1.size() < s2.size() ? s1.size(): s2.size();
    int flag = 0;
    for (int i = 0; i < min; ++i) {
        if(s1[i] == s2[i]) {
            if(!flag) {
                if(s1[i] <= 'Z' && s1[i] >= 'A') {
                    flag = 1;
                    xingqi = int(s1[i] - 'A');
                }
            }
            else {
                if(s1[i] <= 'Z' && s1[i] >= 'A')
                    hour = int(s1[i] - 'A' + 10) % 24;
                else hour = s1[i] - 0x30;
                break;
            }
        }
    }
    min = s3.size() < s4.size() ? s3.size(): s4.size();
    for (int i = 0; i < min; ++i) {
        if(s3[i] == s4[i] && ((s3[i] <= 'Z' && s3[i] >= 'A') || (s3[i] <='z' && s3[i] >= 'a'))) {
            minute = i;
            break;
        }
    }
    cout<<tim[xingqi]<<" ";
    if(hour < 10)
        cout<<"0"<<hour<<":";
    else cout<<hour<<":";
    if(minute < 10)
        cout<<"0"<<minute;
    else cout<<minute;
    return 0;
}