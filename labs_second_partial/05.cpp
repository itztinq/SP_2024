#include<iostream>
using namespace std;
int main(){
    const int MAX_SIZE=100;
    int niza[MAX_SIZE];
    int n=0, broj;
    
    while(cin>>broj && broj!=-1) {
        if(n<MAX_SIZE) {
            niza[n++]=broj;
        }
    }
    
    for(int t=0;t<3;t++) {
        int L, R, V, I;
        cin>>L>>R>>V>>I;
        
        if(I==0) {
            for(int i=L;i<=R;i++) {
                niza[i]+=V;
            }
        } else if(I==1) {
            for(int i=L+1;i<R;i++) {
                niza[i]+=V;
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
