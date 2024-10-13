#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int prices[n];
    float sum=0;
    
    for(int i=0;i<n;i++) {
        cin>>prices[i];
        sum+=prices[i];
    }
    
    float average=sum/n;
    cout<<"Average price: "<<average<<endl;
    
    for(int i=0;i<n;i++) {
        if(prices[i]<average) {
            prices[i]=0;
        } else {
            prices[i]=1;
        }
        cout<<prices[i]<<" ";
    }
    cout<<endl;
    return 0;

}
