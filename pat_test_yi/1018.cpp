#include <iostream>
#include <cmath>
#include <cstdio>
#define BB 0
#define CC 1
#define JJ 2
using namespace std;
int main()
{
	int num;
	int win = 0, lose = 0, equal = 0; //for jia
	int jia[3] = {0};  //B, C, J
	int yi[3] = {0};   //B, C, J
	char ch[4] = "BCJ";
	cin>>num;
	char a, b;
	while(num--) {
		cin>>a>>b;
		if(a == 'C') {
			if(b == 'C') 
				equal++;
			else if(b == 'B'){
				lose++;
				yi[BB]++;
			}
			else if(b == 'J'){
				win++;
				jia[CC]++;
			}
		}
		else if(a == 'B') {
			if(b == 'C') {
				win++; 
				jia[BB]++;
			}
			else if(b == 'B') 
				equal++;
			else if(b == 'J') {
				lose++;
				yi[JJ]++;
			}
		}
		else if(a == 'J') {
			if(b == 'C') {
				lose++; 
				yi[CC]++;
			}
			else if(b == 'B') {
				win++;
				jia[JJ]++;
			}
			else if(b == 'J') 
				equal++;
		}
	}
	cout<<win<<" "<<equal<<" "<<lose<<endl;
	cout<<lose<<" "<<equal<<" "<<win<<endl;
	int jia_max = 0, jia_now = 0, yi_max = 0, yi_now = 0;
	for (int i = 0; i < 3; ++i) {
		if(jia[i] > jia_max) {
			jia_now = i;
			jia_max = jia[i];
		}
		if(yi[i] > yi_max) {
			yi_now = i;
			yi_max = yi[i];
		}
	}
	cout<<ch[jia_now]<<" "<<ch[yi_now];
	return 0;
}