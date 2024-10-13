#include<iostream>
using namespace std;

void transformirajNiza(int niza[], int n) {
    int pomestuvanje=niza[0];
    int novaNiza[101]={0};
    
    if(pomestuvanje>0) {
        pomestuvanje=min(pomestuvanje, n);
        for(int i=0;i<n;i++) {
            novaNiza[i+pomestuvanje]=niza[i];
        }
    } else {
        pomestuvanje=-pomestuvanje;
        pomestuvanje=min(pomestuvanje, n);
        for(int i=pomestuvanje;i<n;i++) {
            novaNiza[i-pomestuvanje]=niza[i];
        }
    }
    
    for(int i=0;i<n;i++) {
        niza[i]=novaNiza[i];
    }
}

int main() {
    int m;
    cin>>m;
    
    int prazniNizi=0;
    
    while(m--) {
        int n;
        cin>>n;
        int niza[101];
        
        for(int i=0;i<n;i++) {
            cin>>niza[i];
        }
        
        transformirajNiza(niza, n);
        
        bool ePrazna=true;
        for(int i=0;i<n;i++) {
            cout<<niza[i]<<" ";
            if(niza[i]!=0) {
                ePrazna=false;
            }
        }
        cout<<endl;
        
        if(ePrazna) {
            prazniNizi++;
        }
    }
    cout<<prazniNizi<<endl;
}
