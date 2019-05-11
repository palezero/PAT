#include <iostream>
#define ull unsigned long long 
using namespace std;
void jinzhi(ull sum, int wei) {
	if(sum == 0) return;
	jinzhi(sum / wei, wei);
	cout<<sum % wei;
}
int main() {
	ull a, b;
	int wei;
	cin>>a>>b>>wei;
	ull sum = a + b;
	if(sum == 0) cout<<0<<endl;
	else jinzhi(sum, wei);
	return 0;
}