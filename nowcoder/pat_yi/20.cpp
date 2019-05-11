#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int box[], int num, int left, int target) {

}
int main() {
    int num, coef;
    int max_now = 0;
    int i, j;
    cin>>num>>coef;
    int box[num];
    for (i = 0; i < num; ++i)
        cin>>box[i];
    sort(box, box+num);
    cout<<binary_search(box, num, i, coef * j)<<endl;
    return 0;
}