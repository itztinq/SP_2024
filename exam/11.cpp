#include<iostream>
using namespace std;

int poramnet(int a) {
    if(a==0) {
        return 0;
    }
    
    int cifra=a%10;
    
    if(cifra==9) {
        return 7+10*poramnet(a/10);
    }
    return cifra+10*poramnet(a/10);
}
int main() {
    int MAX_NUMBERS=100;
    int broevi[MAX_NUMBERS];
    int brojac=0;
    int broj;
    
    while(cin>>broj && brojac<MAX_NUMBERS) {
        broevi[brojac++]=broj;
    }
    
    int najmal_poramnet[5]={999999999,999999999,999999999,999999999,999999999};
    
    for(int i=0;i<brojac;i++) {
        int poramnet_broj=poramnet(broevi[i]);
        
        if(poramnet_broj<najmal_poramnet[4]) {
            najmal_poramnet[4]=poramnet_broj;
            
            for(int j=3;j>=0;--j) {
                if(najmal_poramnet[j]>najmal_poramnet[j+1]) {
                    swap(najmal_poramnet[j],najmal_poramnet[j+1]);
                }else{
                    break;
                }
            }
        }
    }
    for(int i=0;i<5;i++){
        if(najmal_poramnet[i]!=999999999){
        cout<<najmal_poramnet[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
