#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    int maxSum=arr[0];
    int currentSum=arr[0];
    int start=0, end=0, tmpStart=0;
    
    for(int i=1;i<n;i++) {
        if(arr[i]>currentSum+arr[i]) {
            currentSum=arr[i];
            tmpStart=i;
        } else {
            currentSum+=arr[i];
        }
        
        if(currentSum>maxSum) {
            maxSum=currentSum;
            start=tmpStart;
            end=i;
        }
    }
    
    int elementsUsed=end-start+1;
    double percentage=(double)elementsUsed/n*100.0;
    cout<<"Maximum Sum: "<<maxSum<<endl;
    cout<<"Percentage of Elements Used: "<<percentage<<endl;
    return 0;
}
