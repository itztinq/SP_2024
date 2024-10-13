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
    
    if(n%2!=0) {
        cout<<"GRESKA"<<endl;
        return 0;
    }
    
    int half=n/2;
    for(int i=0;i<half;i++) {
        for(int j=0;j<half;j++) {
            mat[i][j] = mat[i][j]+mat[i][n-j-1]+mat[n-i-1][j]+mat[n-i-1][n-j-1];
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
