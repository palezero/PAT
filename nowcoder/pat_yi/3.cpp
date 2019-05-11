#include <iostream>
#include <cmath>
using namespace std;
bool iszhi(int num) {
	for(int i = 2; i < ceil(sqrt(num)) + 1; i++)
		if(num % i == 0)
			return false;
	return true;
}

int main() {
	int min, max;
	int num = 2, count = 0, print_count = 0;
	cin>>min>>max;
	while(1) {
		if(iszhi(num) || num == 2) {
			count++;
			if(count >= min) {
				print_count++;
				if(print_count % 10 == 0)
					cout<<num<<endl;
				else
					cout<<num;
				if(count >= max)
					return 0;
				else if(print_count % 10 != 0)
					cout<<" ";
			}
		}
		num++;
	}
	return 0;
}