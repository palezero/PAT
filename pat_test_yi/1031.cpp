#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
    const char pow[] = {7, 9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    const char table[] = {1,0,'X',9,8,7,6,5,4,3,2};
    int num;
    int checksum = 0;
    cin>>num;
    bool flag[num];
    char in[num][19];
    bool flag2 = false;
    for (int n = 0; n < num; ++n) {
        int sum = 0;
        flag[n] = false;
        scanf("%s", in[n]);
        for (int i = 0; i < 17; ++i) {
            if(in[n][i] > '9' || in[n][i] < '0') {
                flag[n] = true;
                flag2 = true;
                break;
            }
            sum += pow[i] * (in[n][i] - 0x30);
        }
        if(flag[n])
        	continue;
        checksum = table[sum % 11];
        if((checksum != (in[n][17] - 0x30))){
        	if(!(checksum == 'X' && in[n][17] == checksum)) {
        		flag[n] = true;
        		flag2 = true;
        	}
   		}
    }
    for (int n = 0; n < num; ++n)
        if(flag[n]) 
        	printf("%s\n", in[n]);
    if(!flag2)
    	cout<<"All passed"<<endl;
    return 0;
}

