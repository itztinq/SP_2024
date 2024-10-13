#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    int mat[100][100];
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<m;i++) {
        int sredina=n/2;
        int sum1=0, sum2=0;
        
        for(int j=0;j<sredina;j++) {
            sum1+=mat[i][j];
        }
        
        if(n%2==0) {
            for(int j=sredina;j<n;j++) {
                sum2+=mat[i][j];
            }
        } else {
            for(int j=sredina+1;j<n;j++) {
                sum2+=mat[i][j];
            }
        }
        
        int razlika=abs(sum1-sum2);
        
        if(n%2!=0) {
            mat[i][sredina]=razlika;
        } else {
            mat[i][sredina-1]=razlika;
            mat[i][sredina]=razlika;
        }
    }
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
