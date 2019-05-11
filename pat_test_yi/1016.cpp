#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	char c1, c2;
	int count = 0;
	int count1 = 0, count2 = 0;
	cin>>s1>>c1>>s2>>c2;
	for (int i = 0; i < s1.size(); ++i) {
		if(s1[i] == c1) {
			count1++;
			count += pow(10, count1-1) * (c1 - 0x30);
		}
	}
	for (int i = 0; i < s2.size(); ++i) {
		if(s2[i] == c2) {
			count2++;
			count += pow(10, count2-1) * (c2 - 0x30);
		}
	}
	cout<<count<<endl;
	return 0;
}