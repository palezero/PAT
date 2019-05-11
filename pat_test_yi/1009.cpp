#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<string> v;
	string temp;
	while(cin>>temp)
		v.push_back(temp);
	for (int i = v.size()-1; i >= 0; --i) {
		cout<<v[i];
		if(i)
			cout<<" ";
	}
}
