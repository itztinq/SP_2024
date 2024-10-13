#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char niza[101];
    while(cin.getline(niza, 101)) {
        if(niza[0]=='#') {
            break;
        }
        
        int brojac=0;
        char cifri[101];
        
        for(int i=0;niza[i]!='\0';i++) {
            if(niza[i]>='0' && niza[i]<='9') {
                cifri[brojac++]=niza[i];
            }
        }
        
        for(int i=0;i<brojac-1;i++) {
            for(int j=0;j<brojac-1-i;j++) {
                if(cifri[j]>cifri[j+1]) {
                    char tmp=cifri[j];
                    cifri[j]=cifri[j+1];
                    cifri[j+1]=tmp;
                }
            }
        }
        cout<<brojac<<":";
        for(int i=0;i<brojac;i++) {
            cout<<cifri[i];
        }
        cout<<endl;
    }
    return 0;
}
