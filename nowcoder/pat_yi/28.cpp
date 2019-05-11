#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int num, ask_num, temp;
	int score[101] = {0};
	int ans[100000] = {0};
	cin>>num;
	for (int i = 0; i < num; ++i)  {
		cin>>temp;
		score[temp]++;
	}
	cin>>ask_num;
	for (int i = 0; i < ask_num; ++i) {
		cin>>temp;
		ans[i] = score[temp];
	}
	for (int i = 0; i < ask_num; ++i) {
		cout<<ans[i];
		if(i != ask_num - 1)
			cout<<" ";
	}
	return 0;
}