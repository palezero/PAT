#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef struct {
    int num;
    double total;
    double price;
}Group;
bool cmp(Group g1, Group g2) {
    return g1.price > g2.price;
}
Group G[100000];
int main() {
    int kind, xuqiu;
    double sum = 0.0;
    cin>>kind>>xuqiu;
    for (int i = 0; i < kind; ++i)
        cin>>G[i].num;
    for (int i = 0; i < kind; ++i) {
        cin>>G[i].total;
        G[i].price = G[i].total * 1.0 / G[i].num;
    }
    sort(G, G + kind, cmp);
    for (int i = 0; i < kind; ++i) {
        if(xuqiu <= G[i].num) {
            sum += xuqiu * G[i].price;
            break;
        }
        else {
            sum += G[i].total;
            xuqiu -= G[i].num;
        }
    }
    printf("%.2f", sum);
    return 0;
}