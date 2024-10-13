#include<iostream>
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
    
    int niza[100];
    
    for(int i=0;i<m;i++) {
        double suma=0;
        for(int j=0;j<n;j++) {
            suma+=mat[i][j];
        }
        
        double aritmetickaSredina=suma/n;
        
        int najoddalecen=mat[i][0];
        double max_razlika=mat[i][0]-aritmetickaSredina;
        if(max_razlika<0) {
            max_razlika*=-1;
        }
        
        for(int j=1;j<n;j++) {
            double razlika=mat[i][j]-aritmetickaSredina;
            
            if(razlika<0) {
                razlika*=-1;
            }
            
            if(razlika>max_razlika) {
                max_razlika=razlika;
                najoddalecen=mat[i][j];
            }
        }
        niza[i]=najoddalecen;
    }
    
    for(int i=0;i<m;i++) {
        cout<<niza[i]<<" ";
    }
    return 0;
}
