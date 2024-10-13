#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int mat[100][100];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    int sum=0;
    for(int j=0;j<n;j++) {
        sum+=mat[0][j];
    }
    
    bool magichenKvadrat=true;
    
    for(int i=0;i<n;i++) {
        int sumRed=0;
        for(int j=0;j<n;j++) {
            sumRed+=mat[i][j];
        }
        if(sumRed!=sum) {
            magichenKvadrat=false;
            break;
        }
    }
    
    for(int j=0;j<n;j++) {
        int sumKol=0;
        for(int i=0;i<n;i++) {
            sumKol+=mat[j][i];
        }
        if(sumKol!=sum) {
            magichenKvadrat=false;
            break;
        }
    }
    
    if(magichenKvadrat) {
        cout<<"True"<<endl;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i==j || i+j==n-1) {
                    mat[i][j]=sum;
                }
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    } else {
        cout<<"False"<<endl;
    }
    
    return 0;
    
}
