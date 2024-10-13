#include<iostream>
using namespace std;

void form(int n) {
    if(n<=0) {
        return;
    }
    
    for(int i=0;i<n;i++) {
        cout<<"*";
    }
    cout<<endl;
    
    form(n-1);
}

int main() {
    int n;
    cin>>n;
    form(n);
    return 0;
}
