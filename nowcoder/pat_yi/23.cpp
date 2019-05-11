#include<iostream>
#include<string>
using namespace std;
int main() {
	string fact, model;
	cin>>fact>>model;
	bool ascii[128] = {0};
	bool shift = false;
	for (int i = 0; i < fact.size(); ++i) 
		ascii[fact[i]] = 1;
	if(ascii['+']) shift = true;
	for (int i = 0; i < model.size(); ++i) {
		if((ascii[model[i]]))
			continue;
		if(model[i] <= 'Z' && model[i] >= 'A') {
			if(ascii[model[i] - 'A' + 'a'])
				continue;
			if(shift)
				continue;
		}
		if(model[i] <= 'z' && model[i] >= 'a' && (ascii[model[i] - 'a' + 'A']))
			continue;
		cout<<model[i];
	}
	cout<<endl;
	return 0;
}