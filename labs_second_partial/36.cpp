#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int mat[n][n];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j) {
                mat[i][j]*=-1;
            }
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
