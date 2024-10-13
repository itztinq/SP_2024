#include<iostream>
#include<cstring>
using namespace std;

bool ePalindrom(char niza[]) {
    int dolz=strlen(niza);
    
    for(int i=0;i<dolz/2;i++) {
        if(niza[i]!=niza[dolz-i-1]) {
            return false;
        }
    }
    return true;
}

bool specijalenZnak(char niza[]) {
    int dolz=strlen(niza);
    
    for(int i=0;i<dolz;i++) {
        if(!isalnum(niza[i])) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    char niza[81];
    char maxPalindrom[81]="";
    int maxDolz=0;
    
    for(int i=0;i<n;i++) {
        cin.getline(niza, 81);
        
        if(ePalindrom(niza) && specijalenZnak(niza)) {
            int dolz=strlen(niza);
            if(dolz>maxDolz) {
                strcpy(maxPalindrom, niza);
                maxDolz=dolz;
            }
        }
  
    }
    
    if(maxDolz>0) {
        cout<<maxPalindrom<<endl;
    } else {
        cout<<"Nema!"<<endl;
    }
    return 0;
}
