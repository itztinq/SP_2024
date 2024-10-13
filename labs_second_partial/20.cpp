#include<iostream>
using namespace std;

bool eRastechki(int broj) {
    int prethodnaCifra=broj%10;
    broj/=10;
    while(broj>0) {
        int tekovnaCifra=broj%10;
        if(tekovnaCifra>=prethodnaCifra) {
            return -1;
        }
        prethodnaCifra=tekovnaCifra;
        broj/=10;
    }
    return 1;
}

int sumaCifri(int broj) {
    if(broj==0) {
        return 0;
    }
    return broj%10+sumaCifri(broj/10);
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int broj;
        cin>>broj;
        
        if(eRastechki(broj)==1) {
            int suma=sumaCifri(broj);
            cout<<broj<<" (suma: "<<suma<<")"<<endl;
        }
    }
    return 0;
}
