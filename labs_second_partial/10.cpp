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
    
    
    bool valid=true;
    for(int i=0;i<n;i++) {
        int sum=0;
        for(int j=i+1;j<n;j++) {
            sum+=mat[i][j];
        }
        if((mat[i][i]!=sum && i!=n-1) || (i==n-1 && sum!=0)) {
            valid=false;
            break;
        }
    }
    
    if(valid) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    } else {
        cout<<-1;
    }
    return 0;
}
