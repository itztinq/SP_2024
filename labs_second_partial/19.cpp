#include<iostream>
using namespace std;

int najdiMin(int niza[], int n) {
    int min=niza[0];
    for(int i=1;i<n;i++) {
        if(niza[i]<min) {
            min=niza[i];
        }
    }
    return min;
}

int najdiMax(int niza[], int n) {
    int max=niza[0];
    for(int i=1;i<n;i++) {
        if(niza[i]>max) {
            max=niza[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    
    int min=najdiMin(niza, n);
    int max=najdiMax(niza, n);
    int razlika=max-min;
    
    for(int i=0;i<n;i++) {
        niza[i]+=razlika;
    }
    
    cout<<"MAX -> "<<max<<endl;
    cout<<"MIN -> "<<min<<endl;
    for(int i=0;i<n;i++) {
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    return 0;
}
