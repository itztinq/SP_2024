#include<iostream>
using namespace std;
int main(){
    int MAX_SIZE=100;
    int m, n;
    int niza1[MAX_SIZE], niza2[MAX_SIZE], spoenaNiza[MAX_SIZE];
    
    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>niza1[i];
    }
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>niza2[i];
    }
    
    int i=0, j=0, k=0;
    while(i<m && j<n) {
        if(niza1[i]<=niza2[j]) {
            spoenaNiza[k++]=niza1[i++];
        } else {
            spoenaNiza[k++]=niza2[j++];
        }
    }
    
    while(i<m) {
        spoenaNiza[k++]=niza1[i++];
    }
    while(j<n) {
        spoenaNiza[k++]=niza2[j++];
    }
    
    for(int x=0;x<k;x++) {
        cout<<spoenaNiza[x]<<" ";
    }
    cout<<endl;
    return 0;
}
