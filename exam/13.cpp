#include<iostream>
using namespace std;
int main() {
    int x, m, n;
    cin>>x;
    cin>>m>>n;
    int mat[100][100];
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<m;i++) {
        int sum=0;
        for(int j=0;j<n;j++) {
            sum+=mat[i][j];
            
        }
        
        for(int j=0;j<n;j++) {
            if(sum>x) {
                mat[i][j]=1;
            } else if(sum<x) {
                mat[i][j]=-1;
            } else {
                mat[i][j]=0;
            }
        }
    }
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
