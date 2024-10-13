#include<iostream>
using namespace std;
int main() {
    int cetiricifren, tricifren;
    cin>>cetiricifren>>tricifren;
    
    int sum1=0;
    int tmp=cetiricifren;
    for(int i=0;i<4;i++) {
        sum1+=tmp%10;
        tmp/=10;
    }
    
    int sum2=0;
    tmp=tricifren;
    for(int i=0;i<3;i++) {
        sum2+=tmp%10;
        tmp/=10;
    }
    
    if(sum1>sum2) {
        cout<<1;
    } else cout<<0;
    return 0;
}
