#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int num[10] = {0};
	cin>>s;
	for (int i = 0; i < s.size(); ++i) 
		num[s[i] - 0x30]++;
	for (int i = 0; i < 10; ++i) {
		if(num[i] != 0)
			cout<<i<<":"<<num[i]<<endl;
	}
	return 0;
}