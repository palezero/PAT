#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
char temp[4] = {0, 0, 0, 0};
bool cmp(char a, char b) {
    return a > b;
}
int getmax(int num) {
    int re = 0;
    for (int i = 0; i < 4; ++i, num /= 10)
        temp[i] = num % 10;
    sort(temp, temp+4);
    for (int i = 0; i < 4; ++i) {
    	printf("%d", temp[3-i]);
        re += pow(10, i) * temp[i];
    }
    cout<<" - ";
    return re;
}
int getmin(int num) {
    int re = 0;
    for (int i = 0; i < 4; ++i, num /= 10)
        temp[i] = num % 10;
    sort(temp, temp+4, cmp);
    for (int i = 0; i < 4; ++i) {
        printf("%d", temp[3-i]);
        re += pow(10, i) * temp[i];
    }
    cout<<" = ";
    return re;
}
int main() {
    int num, num2;
    cin>>num;
    if(num == 6174)
    	cout<<"7641 - 1467 = 6174"<<endl;
    while(num != 6174 && num != 0) {
        num2 = getmax(num);
        num2 -= getmin(num);
        printf("%04d\n", num2);
        num = num2;
    }
    return 0;
}