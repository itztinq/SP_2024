#include<iostream>
using namespace std;

void promeniNiza(int *niza, int n) {
    for(int i=1;i<n;i++) {
        *(niza+i)+=*(niza+i-1);
    }
}

int main() {
    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    
    cout<<"Vnesenata niza e:"<<endl;
    for(int i=0;i<n;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    promeniNiza(niza, n);
    cout<<"Novata niza e:"<<endl;
    for(int i=0;i<n;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
