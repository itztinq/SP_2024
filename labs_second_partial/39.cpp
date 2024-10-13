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
    
    int maxSum=0, maxKol=0;
    
    for(int j=0;j<n;j++) {
        int sum=0;
        for(int i=0;i<n;i++) {
            sum+=mat[i][j];
        }
        if(sum>maxSum) {
            maxSum=sum;
            maxKol=j;
        }
    }
    
    for(int i=0;i<n;i++) {
        mat[i][maxKol]+=maxSum;
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
