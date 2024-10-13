#include<iostream>
using namespace std;
int main() {
    int m, n, r, k;
    cin>>m>>n;
    cin>>r>>k;
    
    int a[100][100];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    
    int min=a[0][0];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j]<min) {
                min=a[i][j];
            } 
        }
    }
    
    for(int i=r-1;i>=0;i--) {
        for(int j=k-1;j>=0;j--) {
            a[i][j]=min;
        }
    }
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
