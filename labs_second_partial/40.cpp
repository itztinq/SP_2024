#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    int mat[100][100];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int start=0;start<m;start++) {
        int i=0, j=start;
        while(i<n && j>=0) {
            cout<<mat[i][j]<<" ";
            i++;
            j--;
        }
        cout<<endl;
    }
    
    return 0;
}
