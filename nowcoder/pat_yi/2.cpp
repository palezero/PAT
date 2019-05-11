#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
	int num;
	int temp;
	int result[5] = {0};
	double d3 = 0;
	int count3 = 0;
	bool b1 = 1;
	bool find[5] = {0};
	cin>>num;
	while(num--) {
		cin>>temp;
		switch(temp % 5) {
			case 0:	
				if(temp % 2 == 0) {
					result[0] += temp;
					find[temp % 5] = 1;
				}
				break;
			case 1:	
				if(b1) result[1]+=temp;
				else result[1] -= temp;
				b1 = !b1;
				find[temp % 5] = 1;
				break;
			case 2:	
				result[2]++;
				find[temp % 5] = 1;
				break;
			case 3:	
				result[3] += temp;
				count3++;
				find[temp % 5] = 1;
				break;
			case 4:	
				if(temp > result[4]){
					result[4] = temp;
					find[temp % 5] = 1;
				}
				break;
		}
	}
	d3 = result[3] * 1.0 / count3;
	for (int i = 0; i < 5; ++i) {
		if(find[i]) {
			if(i == 3)
				printf("%.1f", d3);
			else
				cout<<result[i];
		}
		else cout<<"N";
		if(i < 4)
			cout<<" ";
	}
	return 0;
}