#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    if(n%2!=0) {
        cout<<"GRESKA";
        return 0;
    }
    
    int mat[100][100];
    int half=n/2;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    int zdiplenaMat[100][100]={0};
    
    for(int i=0;i<half;i++) {
        for(int j=0;j<half;j++) {
            zdiplenaMat[i][j]=mat[i][j]+mat[n-1-i][j]+
                              mat[i][n-1-j]+mat[n-1-i][n-1-j];
        }
    }
    for(int i=0;i<half;i++) {
        for(int j=0;j<half;j++) {
            cout<<zdiplenaMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
