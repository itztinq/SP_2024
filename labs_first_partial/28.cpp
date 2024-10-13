#include<iostream>
using namespace std;

bool ePalindrom(int broj) {
    int original=broj;
    int obraten=0;
    while(broj>0) {
        int cifra=broj%10;
        obraten=obraten*10+cifra;
        broj/=10;
    }
    return original==obraten;
}

int main() {
    int a, b;
    cin>>a>>b;
    
    int najmal_palindrom=-1;
    int najgolem_palindrom=-1;
    
    for(int i=a;i<=b;i++) {
        if(ePalindrom(i)) {
            if(najmal_palindrom==-1) {
                najmal_palindrom=i;
            }
            najgolem_palindrom=i;
        }
    }
    
    if(najmal_palindrom!=-1) {
        cout<<"Smallest Palindromic Number: "<<najmal_palindrom<<endl;
        cout<<"Largest Palindromic Number: "<<najgolem_palindrom<<endl;
    } else {
        cout<<"not found"<<endl;
    }
    return 0;
}
