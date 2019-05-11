#include<iostream>
using namespace std;
int school[100001] = {0};
int main() {
    int num;
    int max_score = 0, max_id = 1;
    int score, id;
    cin>>num;
    while(num--) {
        cin>>id>>score;
        school[id] += score;
        if(school[id] > max_score) {
            max_score = school[id];
            max_id = id;
        }
    }
    cout<<max_id<<" "<<school[max_id]<<endl;
    return 0;
}