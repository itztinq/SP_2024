#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int niza[n];
    
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    
    for(int i=0;i<n;i++) {
        niza[i]*=2;
        if(niza[i]<0) {
            niza[i]*=-1;
        }
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
