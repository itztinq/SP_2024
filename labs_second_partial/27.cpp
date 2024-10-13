#include<iostream>
#include<iomanip>
using namespace std;

void scale(float poeni[], int n) {
    float maxPoeni=poeni[0];
    for(int i=0;i<n;i++) {
        if(poeni[i]>maxPoeni) {
            maxPoeni=poeni[i];
        }
    }
    
    float kolicnik=100.0/maxPoeni;
    
    for(int i=0;i<n;i++) {
        poeni[i]*=kolicnik;
    }
    for(int i=0;i<n;i++) {
        cout<<fixed<<setprecision(2)<<poeni[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    float poeni[100];
    
    for(int i=0;i<n;i++) {
        cin>>poeni[i];
    }
    
    scale(poeni, n);
    return 0;
}
