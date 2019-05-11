#include<iostream>
using namespace std;
int main() {
	int num;
	int count = 0;
	char ch;
	cin>>num>>ch;
	int cnt = num;
	for (int i = 1; num > 0; ++i, ++count) 
		num -= 2 * (2 * i + 1);
	for (int i = 0; i < count; ++i) {
		for (int j = 0; j < i; ++j)
			cout<<" ";
		for (int j = 0; j < 2 * (count - i) - 1; ++j, --cnt)
			cout<<ch;
		cout<<endl;
	}
	for (int i = count-2; i >= 0; --i) {
		for (int j = 0; j < i; ++j)
			cout<<" ";
		for (int j = 0; j < 2 * (count - i) - 1; ++j, --cnt)
			cout<<ch;
		cout<<endl;
	}
	cout<<cnt<<endl;
	return 0;
}