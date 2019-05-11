#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int s[100000];
	int count = 0;
	int temp;
	for (int i = 0; i < 10; ++i) {
		cin>>temp;
		if(!temp) continue;
		fill(s + count, s + count + temp, i);
		count += temp;
	}
	sort(s, s+count);
	if(s[0] == 0) 
		for (int i = 0; i < count; ++i) 
			if(s[i] > 0) {
				s[0] = s[i];
				s[i] = 0;
				break;
			}
	for (int i = 0; i < count; ++i) 
		cout<<s[i];
	return 0;
}