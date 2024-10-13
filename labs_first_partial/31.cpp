#include<iostream>
using namespace std;
int main() {
    char x;
    int broj;
    cin>>x>>broj;
    
    int prevrten=0;
    int pozicija=0;
    while(broj>0) {
        int cifra=broj%10;
        if(pozicija%2==0) {
            cout<<x;
        } else {
            cout<<cifra;
        }
        broj/=10;
        pozicija++;
    }
    cout<<endl;
    return 0;
}
