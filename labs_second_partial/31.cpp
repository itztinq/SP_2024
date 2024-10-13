#include<iostream>
using namespace std;

void transform(int arr[], int len, int k) {
    for(int i=k-1;i<len;i+=k) {
        arr[i]*=(i+1); //pomnozuvanje so redniot broj
        
        if(i+1<len) {
            arr[i]-=arr[i+1]; //odzemanje na sledbenikot
        } else if(i-1>=0) {
            arr[i]+=arr[i-1]; //sobiranje so prethodnikot ako nema sledbenik
        }
    }
}

int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        int len;
        cin>>len;
        int arr[len];
        
        for(int j=0;j<len;j++) {
            cin>>arr[j];
        }
        
        int k;
        cin>>k;
        
        transform(arr, len, k);
        
        for(int j=0;j<len;j++) {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
