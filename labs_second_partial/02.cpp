#include<iostream>
using namespace std;

void sortiraj(int  niza[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(niza[j]>niza[j+1]) {
                int tmp=niza[j];
                niza[j]=niza[j+1];
                niza[j+1]=tmp;
            }
        }
    }
}

int main(){
    int n, k;
    cin>>n>>k;
    int niza[n];
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    sortiraj(niza, n);
    
    cout<<k<<"-te najmali elementi se: ";
    for(int i=0;i<k;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
