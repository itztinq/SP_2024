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
        if(i%2==0) {
            niza[i]*=2;
        } else {
            niza[i]+=2;
        }
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
