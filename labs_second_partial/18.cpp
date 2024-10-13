#include<iostream>
#include<cmath>
using namespace std;

bool ePalindrom(int broj) {
    int obraten=0;
    int original=broj;
    while(broj>0) {
        int cifra=broj%10;
        obraten=obraten*10+cifra;
        broj/=10;
    }
    return obraten==original;
}

int sumaCifri(int broj) {
    int sum=0;
    while(broj>0) {
        sum+=broj%10;
        broj/=10;
    }
    return sum;
}

int brojCifri(int broj) {
    if(broj==0) {
        return 0;
    }
    
    return 1+brojCifri(broj/10);
}

int main() {
    int broj;
    while(cin>>broj) {
        if(ePalindrom(broj)) {
            cout<<sumaCifri(broj)<<endl;
        } else {
            cout<<brojCifri(broj)<<endl;
        }
    }
    return 0;
}
