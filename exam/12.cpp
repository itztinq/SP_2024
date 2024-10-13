#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[50][100];
    int B[100][50];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n*2;j++) {
            cin>>A[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            B[i][j]=A[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=n;j<n*2;j++) {
            B[i+n][j-n]=A[i][j];
        }
    }
    
    for(int i=0;i<n*2;i++) {
        for(int j=0;j<n;j++) {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
