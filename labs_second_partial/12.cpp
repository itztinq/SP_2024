#include<iostream>
using namespace std;
 int main(){
     int m, n;
     cin>>m>>n;
     int mat[100][100];
     
     for(int i=0;i<m;i++) {
         for(int j=0;j<n;j++) {
             cin>>mat[i][j];
         }
     }
     
     bool simetricna=true;
     if(m!=n) {
         simetricna=false;
     } else {
         for(int i=0;i<m;i++) {
             for(int j=0;j<n;j++) {
                 if(mat[i][j]!=mat[j][i]) {
                     simetricna=false;
                     break;
                 }
             }
             if(!simetricna) break;
         }
     }
     
     if(simetricna) {
         cout<<1<<endl;
     } else {
         cout<<-1<<endl;
     }
     
     for(int i=0;i<m;i++) {
         for(int j=0;j<n;j++) {
             cout<<mat[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
 }
