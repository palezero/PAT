#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
	int a1, a2, b1, b2;
	int num;
	bool awin, bwin;
	int acount = 0, bcount = 0;
	cin>>num;
	while(num--) {
		cin>>a1>>a2>>b1>>b2;
		awin = (a2 == (a1 + b1));
		bwin = (b2 == (a1 + b1));
		if(awin > bwin)
			bcount++;
		else if(bwin > awin)
			acount++;
	}
	cout<<acount<<" "<<bcount<<endl;
	return 0;
}