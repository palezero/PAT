#include<iostream>
#include<string>
using namespace std;
int main() {
	bool flag[128] = {0};
	int now = 0;
	string model, fact;
	cin>>model>>fact;
	for (int i = 0; i < model.size(); ++i) {
		if(model[i] == fact[now])
			now++;
		else {
			if(model[i] >= 'a' && model[i] <= 'z') 
				model[i] = model[i] -'a' + 'A';
			if(!flag[model[i]])
				cout<<model[i];
			flag[model[i]] = 1;
		}
	}
	return 0;
}