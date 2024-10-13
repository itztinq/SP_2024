#include<iostream>
using namespace std;
int main(){
    int broj;
    cin>>broj;
    int sum_parni=0,sum_neparni=0;
    if(broj<10000||broj>99999){
        return 1;
    }
    for(int i=0;i<5;++i){
        int cifra=broj%10; //ja zema poslednata cifra
        broj/=10; //ja otstranuva poslednata cifra
        if(i%2==0){
            sum_parni+=cifra;
        }else{
            sum_neparni+=cifra;
        }
    }
    cout<<"Sumata na cifrite na parnite pozicii e "<<sum_parni<<endl;
    cout<<"Sumata na cifrite na neparnite pozicii e "<<sum_neparni<<endl;
    return 0;
}
