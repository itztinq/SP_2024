#include<iostream>
using namespace std;

void transformirajNiza(char niza[], int x, int index=0) {
    if(niza[index]=='\0') {
        return;
    }
    
    char c=niza[index];
    if(c>='a' && c<='z') {
        niza[index]='a'+(c-'a'+x)%26;
    } else if(c>='A' && c<='Z') {
        niza[index]='A'+(c-'A'+x)%26;
    }
    
    transformirajNiza(niza, x, index+1);
}

int main() {
    int n, x;
    cin>>n>>x;
    cin.ignore();
    
    for(int i=0;i<n;i++) {
        char niza[81];
        cin.getline(niza, 81);
        transformirajNiza(niza, x);
        cout<<niza<<endl;
    }
    return 0;
}
