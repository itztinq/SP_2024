#include<iostream>
using namespace std;

bool prostBroj(int broj) {
    if(broj<=1) return false;
    if(broj==2 || broj==3) return true;
    if(broj%2==0 || broj%3==0) return false;
     
    for(int i=5;i*i<=broj;i++) {
        if(broj%i==0 || broj%(i+2)==0) return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    
    for(int i=0;i<n-1;i+=2) {
        int parCifri=niza[i]*10+niza[i+1];
                
        if(prostBroj(parCifri)) {
            cout<<"brojot "<<niza[i]<<niza[i+1]<<" e prost"<<endl;
        } else {
            cout<<"brojot "<<niza[i]<<niza[i+1]<<" NE e prost"<<endl;
        }
    }
    
    if(n%2!=0) {
        int poslednaCifra=niza[n-1];
        if(prostBroj(poslednaCifra)) {
            cout<<"brojot "<<poslednaCifra<<" e prost"<<endl;
        } else {
            cout<<"brojot "<<poslednaCifra<<" NE e prost"<<endl;
        }
    }
    
    return 0;
}    
