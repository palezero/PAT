#include<iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	if(num == 0) {
		cout<<0;
		return 0;
	}
	int bai = num / 100;
	int shi = num / 10 % 10;
	int ge = num % 10;
	for (int i = 0; i < bai; ++i)
		cout<<"B";
	for (int i = 0; i < shi; ++i)
		cout<<"S";
	for (int i = 1; i <= ge; ++i)
		cout<<i;
	return 0;
}
