#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int niza[n];
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    for(int i=0;i<n;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    
    int brojac=0;
    for(int i=0;i<n;i++) {
        if(niza[i]==k) {
            brojac++;
        }
    }
    cout<<"Brojot "<<k<<" vo nizata se naogja "<<brojac<<" pati."<<endl;
    return 0;
}
