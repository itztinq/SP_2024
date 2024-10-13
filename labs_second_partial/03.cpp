#include<iostream>
using namespace std;
int main(){
    int MAX_SIZE=100;
    int niza[MAX_SIZE];
    int n=0, broj;
    
    while(cin>>broj && n<MAX_SIZE) {
        niza[n]=broj;
        n++;
    }
    
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(niza[j]==niza[i]) {
                niza[j]+=(j-i);
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
