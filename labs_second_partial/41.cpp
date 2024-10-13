#include<iostream>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    int mat[100][100];
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<m;i++) {
        int maxElement=mat[i][0];
        for(int j=1;j<n;j++) {
            if(mat[i][j]>maxElement) {
                maxElement=mat[i][j];
            }
        }
        mat[i][n-1]=maxElement;
    }
    
    double sum=0.0;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
            sum+=mat[i][j];
        }
        cout<<endl;
    }
    
    double avg=sum/(m*n);
    cout<<avg<<endl;
    return 0;
}
