#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#define sign_zheng 1
#define sign_fu -1
using namespace std;
typedef struct {
	char sign;
	string num;
	char power_sign;
	string jingdu;
	int jd;
	string raw;
}sci_num;
int main() {
	int point = 1;
	sci_num num;
	cin>>num.raw;
	num.sign = (num.raw[0] == '+')? sign_zheng: sign_fu;
	int i;
	for (i = 1; num.raw[i] != 'E'; ++i) 
		num.num += num.raw[i];
	num.power_sign = (num.raw[++i] == '+')? sign_zheng: sign_fu;
	for (i++; i < num.raw.size(); ++i)
		num.jingdu += num.raw[i];
	num.jd = atoi(num.jingdu.c_str()) * num.power_sign;

	if(num.jd > 0)
		for (int i = 0; i < num.jd; i++) {
			if((point + 1 + i) >= num.num.size()) 
				num.num += '0';
			swap(num.num[point + i], num.num[point + 1 + i]);
		}
	else
		for (int i = 0; i > num.jd; i--) {
			if((point - 1 + i) <= 0) {
				num.num = '0'+num.num;
				point++;
			}
			swap(num.num[point + i], num.num[point - 1 + i]);
		}
	if(num.num[0] == '.')
		num.num = '0' + num.num;
	if(num.num[num.num.size()-1] == '.')
		num.num = num.num.substr(0, num.num.size()-1);
	if(num.sign == sign_fu) 
		num.num = '-' + num.num;
	cout<<num.num<<endl;
	return 0;
}
