#include <iostream>
using namespace std;
int main() {
	int i;
	int count = 0;
	cin>>i;
	while(1) {
		if(i == 1) break;
		if(i % 2 == 0)
			i /= 2;
		else
			i = (3 * i + 1) / 2;
		count++;
	}
	cout<<count<<endl;
	return 0;
}