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
    
    for(int i=0;i<n;i++) {
        int min=mat[i][0];
        int max=mat[i][0];
        for(int j=1;j<n;j++) {
            if(mat[i][j]<min) {
                min=mat[i][j];
            }
            if(mat[i][j]>max) {
                max=mat[i][j];
            }
        }
        
        for(int j=0;j<n;j++) {
            if(mat[i][j]==min) {
                mat[i][j]=0;
            }
            if(mat[i][j]==max) {
                mat[i][j]=1;
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
