#include <iostream>
#include <string>
using namespace std;
string tim[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main() {
    string s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    int xingqi = 0, hour = 0, minute = 0;
    int min = s1.size() < s2.size() ? s1.size(): s2.size();
    char flag = 0;
    for (int i = 0; i < min; ++i) {
        if(s1[i] == s2[i]) {
            if(flag == 0) {
                if(s1[i] <= 'G' && s1[i] >= 'A') {
                    flag++;
                    xingqi = s1[i] - 'A';
                }
            }
            else if(flag == 1) {
                if(s1[i] <= 'N' && s1[i] >= 'A') {
                    hour = s1[i] - 'A' + 10;
                    break;
                }
                else if(s1[i] <= '9' && s1[i] >= '0') {
                    hour = s1[i] - 0x30;
                    break;
                }
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
    cout<<tim[xingqi % 7]<<" ";
    if(hour < 10)
        cout<<"0"<<hour<<":";
    else cout<<hour<<":";
    if(minute < 10)
        cout<<"0"<<minute;
    else cout<<minute;
    return 0;
}