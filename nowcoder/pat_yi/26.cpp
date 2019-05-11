#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num;
	char ch;
	cin>>num>>ch;
	for (int i = 0; i < num; ++i)
		cout<<ch;
	cout<<endl;
	for (int i = 0; i < round(num/2.0-2); ++i) {
		cout<<ch;
		for (int j = 0; j < num-2; ++j)
			cout<<" ";
		cout<<ch;
		cout<<endl;
	}
	for (int i = 0; i < num; ++i)
		cout<<ch;
}