#include<iostream>
using namespace std;

int formirajIndex(int i, int j) {
    if(j<10) {
        return i*10+j;
    } else if(j<100) {
        return i*100+j;
    } else if(j<1000) {
        return i*1000+j;
    }
}

int main() {
    int n, m;
    cin>>n>>m;
    int a[120][120];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    
    for(int j=0;j<m;j++) {
        int brojac=0;
        for(int i=0;i<n;i++) {
            int indBroj=formirajIndex(i, j);
            if(a[i][j]==indBroj) {
                brojac++;
            }
        }
        cout<<brojac<<endl;
    }
    return 0;
    
}
