#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matrica[100][100];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrica[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j) {
                matrica[i][j]*=-1;
            }
            cout<<setw(3)<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
