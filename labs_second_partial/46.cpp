#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int mat[100][100];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    int y;
    cin>>y;
    
    int diag[100];
    for(int i=0;i<n;i++) {
        diag[i]=mat[i][i];
    }
    
    for(int i=0;i<n;i++) {
        mat[i][i]=mat[i][y];
    }
    
    for(int j=0;j<n;j++) {
        mat[y][j]=diag[j];
    }
    
    for(int i=0;i<n;i++) {
        mat[i][y]=diag[i];
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
