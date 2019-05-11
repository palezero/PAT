#include <iostream>
#include <algorithm>
using namespace std;
typedef struct {
	int id;
	short de;
	short cai;
	short sum;
	short flag;
}Group;
bool istrue(Group G, int min) {
	if(G.de < min || G.cai < min)
		return false;
	return true;
}
bool cmp(Group g1, Group g2) { // 比较总分
	if(g1.sum > g2.sum)
		return true;
	if(g1.sum == g2.sum) {
		if(g1.de > g2.de)
			return true;
		if(g1.de == g2.de)
			return g1.id < g2.id;
		return false;
	}
	return false;
}
Group G0[100001], G1[100001], G2[100001], G3[100001];
int main() {
	int people, L, H, count = 0;
	int f0 = 0, f1 = 0, f2 = 0, f3 = 0;
	cin>>people>>L>>H;
	Group temp;
	for (int i = 0; i < people; ++i) {
		cin>>temp.id>>temp.de>>temp.cai;
		temp.sum = temp.de + temp.cai;
		if(temp.de >= H && temp.cai >= H) {
			G0[f0++] = temp;
		}
		else if(temp.cai < H && temp.cai >= L && temp.de >= H) {
			G1[f1++] = temp;
		}
		else if(temp.cai < H && temp.cai >= L && temp.de < H && temp.de >= L && temp.de >= temp.cai) {
			G2[f2++] = temp;
		}
		else if(temp.cai < L || temp.de < L) 
			continue;
		else {
			G3[f3++] = temp;
		}
		count++;
	}
	sort(G0, G0 + f0, cmp);
	sort(G1, G1 + f1, cmp);
	sort(G2, G2 + f2, cmp);
	sort(G3, G3 + f3, cmp);
	cout<<count<<endl;
	for (int i = 0; i < f0; ++i)
		cout<<G0[i].id<<" "<<G0[i].de<<" "<<G0[i].cai<<endl;
	for (int i = 0; i < f1; ++i)
		cout<<G1[i].id<<" "<<G1[i].de<<" "<<G1[i].cai<<endl;
	for (int i = 0; i < f2; ++i)
		cout<<G2[i].id<<" "<<G2[i].de<<" "<<G2[i].cai<<endl;
	for (int i = 0; i < f3; ++i)
		cout<<G3[i].id<<" "<<G3[i].de<<" "<<G3[i].cai<<endl;
	return 0;
}