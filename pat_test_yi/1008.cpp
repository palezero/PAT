#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {	
	int box[101] = {0};
	int order, num, count = 0;
	cin>>order>>num;
	num = num % order; // 这一步一定要写
	for (int i = 0; i < order; i++) cin>>box[i];
	for (int i = order - num; i < order; ++i) {
		cout<<box[i];
		count++;
		if(count < order)
			cout<<" ";
	}
	for (int i = 0; i < order - num; ++i) {
		cout<<box[i];
		count++;
		if(count < order)
			cout<<" ";
	}
	return 0;
}