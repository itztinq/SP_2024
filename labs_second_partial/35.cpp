#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp=a;
    a=b;
    b=tmp;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    
    if(k>0 && k<n) {
        swap(arr[k], arr[k-1]);
    }
    
    if(k>0 && k<n) {
        swap(arr[n-k-1], arr[n-k]);
    }
    
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
