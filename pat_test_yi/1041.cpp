#include <iostream>
#define ull unsigned long long 
using namespace std;
typedef struct {
	ull id;
	int fact;
}T;
int main() {
	int num;
	ull temp_id;
	int temp_fact;
	int temp_test;
	T test[1004];
	cin>>num;
	for (int i = 0; i < num; ++i) {
		cin>>temp_id>>temp_test>>temp_fact;
		test[temp_test].id = temp_id;
		test[temp_test].fact = temp_fact;
	}
	cin>>num;
	for (int i = 0; i < num; ++i) {
		cin>>temp_id;
		cout<<test[temp_id].id<<" "<<test[temp_id].fact<<endl;
	}
	return 0;
}
