#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mat[100][100];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>j && i+j>n-1) {
                mat[i][j]*=-1;
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
