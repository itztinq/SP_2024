#include<iostream>
using namespace std;

void sumaSosedi(int mat[100][100], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(mat[i][j]<0) {
                int sum=0;
                
                if(i>0) sum+=mat[i-1][j];
                if(j>0) sum+=mat[i][j-1];
                if(i<n-1) sum+=mat[i+1][j];
                if(j<n-1) sum+=mat[i][j+1];
                
                mat[i][j]=sum;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int mat[100][100];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    sumaSosedi(mat, n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
