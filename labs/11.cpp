#include<iostream>
using namespace std;
int main() {
    int broj1, broj2, broj3;
    cin>>broj1>>broj2>>broj3;
    if(broj2>broj1 && broj2>broj3 || broj2<broj1 && broj2<broj3) {
        cout<<"1";
    } else cout<<"0";
    return 0;
}
