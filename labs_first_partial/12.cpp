#include<iostream>
using namespace std;
int main() {
    int broj;
    cin>>broj;
    int cifra1=broj/1000;
    int cifra2=(broj/100)%10;
    int cifra3=(broj/10)%10;
    int cifra4=broj%10;
    
    if(cifra1<cifra2 && cifra2<cifra3 && cifra3<cifra4) {
        cout<<"1";
    }else cout<<"0";
    return 0;
}
