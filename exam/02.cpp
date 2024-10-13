#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    
    char niza[51];
    for(int i=0;i<n;i++) {
        cin.getline(niza, 51);
        
        for(int j=0;j<strlen(niza);j++) {
            niza[j]=tolower(niza[j]);
        }
        
        int brojac=0;
        int dolz=strlen(niza);
        for(int j=0;j<=dolz-3;j++) {
            if(niza[j]=='a' && niza[j+1]=='1' && niza[j+2]=='c') {
                brojac++;
            }
        }
        
        if(brojac>=2) {
            cout<<niza<<endl;
        }
    }
    return 0;
}
