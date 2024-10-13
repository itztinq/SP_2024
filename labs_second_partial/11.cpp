#include<iostream>
using namespace std;
int main(){
    int n, mat[100][100];
    cin>>n;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        int diagIndex=n-1-i;
        int sumLevo=0;
        int brojacLevo=0;
        
        for(int j=0;j<diagIndex;j++) {
            sumLevo+=mat[i][j];
            brojacLevo++;
        }
        double prosekLevo;
        if(brojacLevo>0) {
            prosekLevo=(double)sumLevo/brojacLevo;
        } else {
            prosekLevo=0;
        }
        
        for(int j=diagIndex+1;j<n;j++) {
            if(mat[i][j]<prosekLevo) {
                mat[i][j]=-1;
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
