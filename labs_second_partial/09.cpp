#include<iostream>
using namespace std;

bool istiKoloni(int matrica1[100][100], int matrica2[100][100], int m, int n, int kol1, int kol2) {
    for(int i=0;i<m;i++) {
        if(matrica1[i][kol1]!=matrica2[i][kol2]) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin>>m>>n;
    int matrica1[100][100], matrica2[100][100];
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrica1[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrica2[i][j];
        }
    }
    
    int brojKoloni=0;
    for(int kol1=0;kol1<n;kol1++) {
        bool najdena=false;
        for(int kol2=0;kol2<n;kol2++) {
            if(istiKoloni(matrica1, matrica2, m, n, kol1, kol2)) {
                najdena=true;
                break;
            }
        }
        if(najdena) {
            brojKoloni++;
        }
    }
    cout<<brojKoloni;
    return 0;
    
}
