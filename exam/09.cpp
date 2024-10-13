#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float a[100][100];
    float b[100][100];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    
    float x=0.0, y=0.0;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            x+=a[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=n-i;j<n;j++) {
            y+=a[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j && i+j==n-1) {
                b[i][j]=x+y;
            }
            else if(i==j) {
                b[i][j]=x;
            } 
            else if(i+j==n-1) {
                b[i][j]=y;
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
