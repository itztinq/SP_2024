#include<iostream>
#include<cstring>
using namespace std;

bool horiznontalno(char mat[][50], char zbor[], int n, int &startRed, int &startKol, int &endRed, int &endKol) {
    int dolz=strlen(zbor);
    
    //levo kon desno
    for(int i=0;i<n;i++) {
        for(int j=0;j<=n-dolz;j++) {
            int k;
            
            for(k=0;k<dolz;k++) {
                if(mat[i][j+k]!=zbor[k]) {
                    break;
                }
            }
            
            if(k==dolz) {
                startRed=i;
                startKol=j;
                endRed=i;
                endKol=j+k-1;
                return true;
            }
        }
    }
    
    //desno kon levo
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>=dolz-1;j--) {
            int k;
            
            for(k=0;k<dolz;k++) {
                if(mat[i][j-k]!=zbor[k]) {
                    break;
                }
            }
            
            if(k==dolz) {
                startRed=i;
                startKol=j;
                endRed=i;
                endKol=j-k+1;
                return true;
            }
        }
    }
    
    return false;
}

bool vertikalno(char mat[][50], char zbor[], int n, int &startRed, int &startKol, int &endRed, int &endKol) {
    int dolz=strlen(zbor);
    
    //od gore nadolu
    for(int i=0;i<=n-dolz;i++) {
        for(int j=0;j<n;j++) {
            int k;
            
            for(k=0;k<dolz;k++) {
                if(mat[i+k][j]!=zbor[k]) {
                    break;
                }
            }
            
            if(k==dolz) {
                startRed=i;
                startKol=j;
                endRed=i+k-1;
                endKol=j;
                return true;
            }
        }
    }
    
    //od dolu nagore
    for(int i=n-1;i>=dolz-1;i--) {
        for(int j=0;j<n;j++) {
            int k;
            
            for(k=0;k<dolz;k++) {
                if(mat[i-k][j]!=zbor[k]) {
                    break;
                }
            }
            
            if(k==dolz) {
                startRed=i;
                startKol=j;
                endRed=i-k+1;
                endKol=j;
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    int n;
    cin>>n;
    
    char mat[50][50];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    
    char zbor[11];
    cin>>zbor;
    
    int startRed, startKol, endRed, endKol;
    
    bool pronajdeno=false;
    bool pronajdenoHorizontalno = horiznontalno(mat, zbor, n, startRed, startKol, endRed, endKol);
    bool pronajdenoVertikalno = vertikalno(mat, zbor, n, startRed, startKol, endRed, endKol);
    
    if(pronajdenoHorizontalno) {
        cout<<startRed<<", "<<startKol<<" -> "<<endRed<<", "<<endKol<<endl;
    } else if(pronajdenoVertikalno) {
        cout<<startRed<<", "<<startKol<<" -> "<<endRed<<", "<<endKol<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
    
    return 0;
}
