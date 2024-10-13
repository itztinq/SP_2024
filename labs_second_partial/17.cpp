#include<iostream>
using namespace std;

int najgolemaNeparna(int broj, int maxNeparna=0) {
    if(broj==0) {
        if(maxNeparna==0) {
            return 0;
        } else {
            return maxNeparna;
        }
    }
    
    int cifra=broj%10;
    if(cifra%2!=0) {
        if(cifra>maxNeparna) {
            maxNeparna=cifra;
        }
    }
    
    return najgolemaNeparna(broj/10, maxNeparna);
}

void opseg(int a, int b) {
    if(a>b) {
        return;
    }
    
    int maxNeparna=najgolemaNeparna(a);
    cout<<a<<" -> "<<maxNeparna<<endl;
    
    opseg(a+1, b);
}

int main() {
    int a, b;
    cin>>a>>b;
    
    opseg(a, b);
    return 0;
    
}
