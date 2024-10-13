#include<iostream>
using namespace std;

void transformiraj(int *niza, int n) {
    int minIndex=0;
    int maxIndex=0;
    
    for(int i=1;i<n;i++) {
        if(niza[i]<niza[minIndex]) {
            minIndex=i;
        }
        if(niza[i]>niza[maxIndex]) {
            maxIndex=i;
        }
    }
    
    int razlika=niza[maxIndex]-niza[minIndex];
    int tmp=niza[minIndex];
    niza[minIndex]=niza[maxIndex];
    niza[maxIndex]=tmp;
    
    for(int i=0;i<n;i++) {
        if(i!=minIndex && i!=maxIndex) {
            niza[i]+=razlika;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int niza[n];
    
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    
    transformiraj(niza, n);
    for(int i=0;i<n;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
