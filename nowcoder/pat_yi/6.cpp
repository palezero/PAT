#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main() {
	string s1, s2;
	char c1, c2;
	int cnt1 = 0, cnt2 = 0, count = 0;
	cin>>s1>>c1>>s2>>c2;
	for (int i = 0; i < s1.size(); ++i) 
		if(s1[i] == c1)
			count += (c1 - '0') *pow(10, cnt1++);
	for (int i = 0; i < s2.size(); ++i) 
		if(s2[i] == c2)
			count += (c2 - '0') *pow(10, cnt2++);
	cout<<count<<endl;
	return 0;
}