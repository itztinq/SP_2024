#include<iostream>
using namespace std;
int main() {
    int broj;
    int djoker=0;
    int sum=0;
    int cifra, index=0;
    
    for(int i=0;i<7;i++) {
        cin>>broj;
        cifra=broj%10;
        djoker=djoker*10+cifra;
        index++;
    }
    
    while(true) {
        cin>>broj;
        if(broj<1 || broj>90) {
            break;
        }
        sum+=broj;
    }
    
    djoker+=sum;
    cout<<djoker;
    return 0;
}
