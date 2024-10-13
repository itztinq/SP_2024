#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    double mat[100][100];
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int j=0;j<n;j++) {
        double min=mat[0][j];
        double max=mat[0][j];
        
        for(int i=1;i<m;i++) {
            if(mat[i][j]<min) {
                min=mat[i][j];
            }
            if(mat[i][j]>max) {
                max=mat[i][j];
            }
        }
        
        for(int i=0;i<m;i++) {
            if(max!=min) {
                mat[i][j]=(mat[i][j]-min)/(max-min);
            } else {
                mat[i][j]=0.0;
            }
        }
    }
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<fixed<<setprecision(2)<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
