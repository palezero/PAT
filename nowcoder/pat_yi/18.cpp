#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
typedef struct {
	string name;
	short year;
	short month;
	short day;
	int date;
}Group;
bool cmp(Group g1, Group g2) {
	return g1.date < g2.date;
}
int main() {
	int num;
	int count = 0;
	cin>>num;
	Group people[num];
	Group temp;
	int min = 18140906;
	int max = 20140906;
	for (int i = 0; i < num; ++i) {
		cin>>temp.name;
		scanf("%d/%d/%d", &temp.year, &temp.month, &temp.day);
		temp.date = temp.day + temp.month * 100 + temp.year * 10000;
		if(!(temp.date < min || temp.date > max)) 
			people[count++] = temp;
	}
	sort(people, people+count, cmp);
	if(count > 0)
		cout<<count<<" "<<people[0].name<<" "<<people[count-1].name<<endl;
	else 
		cout<<0<<endl;
	return 0;
}