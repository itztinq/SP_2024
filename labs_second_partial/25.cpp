#include<iostream>
using namespace std;

int isInteresting(int number) {
    int lastDigit=number%10;
    number/=10;
    
    while(number>0) {
        int nextDigit=number%10;
        
        if((lastDigit%2==0 && nextDigit%2==0) || (lastDigit%2!=0 && nextDigit%2!=0)) {
            return 0;
        }
        lastDigit=nextDigit;
        number/=10;
    }
    return 1;
}

void printArray(int numbers[], int n) {
    if(n==0) {
        return;
    }
    
    printArray(numbers+1, n-1);
    
    if(isInteresting(numbers[0])) {
        cout<<numbers[0]<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    printArray(arr, n);
    return 0;
}
