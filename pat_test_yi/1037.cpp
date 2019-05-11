#include<iostream>
#include<cstdio>
using namespace std;
typedef struct {
	long long Galleon;
	long long int Sickle;
	long long int Knut;
	long long int total;
}Money;
Money fun(Money result) {
	result.Galleon = result.total / (17 * 29);
	result.total %= (17 * 29);
	result.Sickle = result.total / 29;
	result.Knut = result.total % 29;
	cout<<result.Galleon<<"."<<result.Sickle<<"."<<result.Knut<<endl;
}
int main(int argc, char const *argv[]) {
	Money m1, m2, result;
	scanf("%ld.%ld.%ld", &m1.Galleon, &m1.Sickle, &m1.Knut);
	scanf("%ld.%ld.%ld", &m2.Galleon, &m2.Sickle, &m2.Knut);
	m1.total = m1.Galleon * 17 * 29 + m1.Sickle * 29 + m1.Knut;
	m2.total = m2.Galleon * 17 * 29 + m2.Sickle * 29 + m2.Knut;
	result.total = m2.total + m1.total;
	if(result.total < 0) {
		cout<<"-";
		result.total = -result.total;
	}
	fun(result);	
	return 0;
}
