#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n<9){
        cout<<"Brojot ne e validen";
    }
    for(int i=n-1;i>=9;--i){
        int reserved=0;
        int temp=i;
        int digitcount=0;
        while(temp>0){
            int digit=temp%10;
            reserved=reserved*10+digit;
            temp/=10;
            digitcount++;
        }
        if(reserved%digitcount==0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
