#include <iostream>
#include <cmath>
#include <cstdio>
#define CLK_TCK 100
using namespace std;
int main() {
	int c1, c2;
	int hour, minute, second;
	cin>>c1>>c2;
	int time = (c2-c1) / CLK_TCK;
	if((c2 - c1) % 100 >= 50)
		time++;
	hour = time / 3600;
	minute = time % 3600 / 60;
	second = time % 60;
	printf("%02d:%02d:%02d\n", hour, minute, second);
	return 0;
}