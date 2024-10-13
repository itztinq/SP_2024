#include<iostream>
using namespace std;
int main() {
    int procent0, prag1, procent1, prag2, procent2;
    cin>>procent0>>prag1>>procent1>>prag2>>procent2;
    int iznos;
    cin>>iznos;
    
    double danok=0;
    if(iznos<=prag1) {
        danok=iznos*(procent0/100.0);
    } else if(iznos<=prag2) {
        danok=prag1*(procent0/100.0)+(iznos-prag1)*(procent1/100.0);
    } else {
        danok=prag1*(procent0/100.0)+(prag2-prag1)*(procent1/100.0)+(iznos-prag2)*(procent2/100.0);
    }
    cout<<danok;
    return 0;
}
