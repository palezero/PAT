#include <iostream>
using namespace std;
int main() {
	int num;
	bool result[100] = {0};
	long long a, b, c;
	int count = 0;
	cin>>num;
	while(num--) {
		cin>>a>>b>>c;
		if(a + b > c)
			result[count] = 1;
		count++;
	}
	for (int i = 0; i < count; ++i) {
		cout<<"Case #"<<i+1<<": ";
		if(result[i])
			cout<<"true"<<endl;
		else
			cout<<"false"<<endl;
	}
	return 0;
}