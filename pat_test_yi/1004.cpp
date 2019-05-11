#include<iostream>
#include<string>
using namespace std;
typedef struct {
	string name;
	string id;
	int score;
}Data;
int main() {
	int num;
	int max_score = -1, min_score = 101;
	string min_id, max_id, max_name, min_name;
	Data temp;
	cin>>num;
	while(num--) {
		cin>>temp.name>>temp.id>>temp.score;
		if(temp.score > max_score) {
			max_score = temp.score;
			max_id = temp.id;
			max_name = temp.name;
		}
		if(temp.score < min_score) {
			min_score = temp.score;
			min_id = temp.id;
			min_name = temp.name;
		}
	}
	cout<< max_name << " " << max_id << endl;
	cout<< min_name << " " << min_id << endl;
	return 0;
}