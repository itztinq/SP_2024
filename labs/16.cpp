#include<iostream>
using namespace std;
int main() {
    int broj;
    cin>>broj;
    
    int cifra1=broj/10000;
    int cifra2=(broj/1000)%10;
    int cifra3=(broj/100)%10;
    int cifra5=broj%10;
    
    int zbir_cifri=cifra2+cifra3;
    if(zbir_cifri==0) {
        cout<<-1;
    } 
    else if(broj%zbir_cifri==0  && cifra1<cifra3 && cifra3<cifra5) {
            cout<<1;
    } else cout<<0;
    return 0;
}
