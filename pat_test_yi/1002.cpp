#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> v = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int iamsum;
void read(int sum) {
    if(sum == 0) return;
    read(sum / 10);
    cout<<v[sum % 10];
    if(sum != iamsum)
    	cout<<" ";
}
int main() {
    string s;
    int sum = 0;
    cin>>s;
    if(s == "0") {
        cout<<"ling";
        return 0;
    }
    for (int i = 0; i < s.size(); ++i)
        sum += s[i]-0x30;
    iamsum = sum;
    read(sum);
    return 0;
}

