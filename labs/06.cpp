#include<iostream>
using namespace std;
int main(){
    int denovi,meseci,godini;
    cin>>denovi;
    godini=denovi/365;
    denovi-=godini*365;
    meseci=denovi/30;
    denovi-=meseci*30;
    cout<<"Years: "<<godini<<", "<<"months: "<<meseci<<", "<<"days: "<<denovi<<endl;
    return 0;
}
