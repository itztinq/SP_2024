#include <iostream>
using namespace std;
int main() {
    int a,b,i,vkupno=0;
    cin>>a>>b;
    for(i=a+1;i<=b;++i){
        if(i%2==0 && i%7==0){
            cout<<i<<endl;
            vkupno++;
        } else if (i%2!=0 && i%3!=0){
            cout<<i<<endl;
            vkupno++;
        }
    }
    int broevi=b-a;
    double procent=0.0;
    if(broevi>0) {
        procent = (double) vkupno / broevi * 100.0;
    }
    if(vkupno==0){
        cout<<"0"<<endl;
    } else {
        cout<<procent<<"%";
    }
    return 0;
}