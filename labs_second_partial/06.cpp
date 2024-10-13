#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int niza[n];
    
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    
    int parniNaParni=0, vkupnoParniPoz=0;
    int neparniNaNeparni=0, vkupnoNeparniPoz=0;
    
    for(int i=0;i<n;i++) {
        if(i%2==0) {
            vkupnoParniPoz++;
            if(niza[i]%2==0) {
                parniNaParni++;
            }
        } else {
            vkupnoNeparniPoz++;
            if(niza[i]%2!=0) {
                neparniNaNeparni++;
            }
        }
    }
    
    bool specijalna=false;
    if(vkupnoParniPoz>0) {
        double procentParni=(double)parniNaParni/vkupnoParniPoz;
        if(procentParni>=0.5) {
            if(vkupnoNeparniPoz>0) {
                double procentNeparni=(double)neparniNaNeparni/vkupnoNeparniPoz;
                if(procentNeparni<=0.3) {
                    specijalna=true;
                }
            }
        }
    }
    
    if(specijalna) {
        cout<<1;
    } else {
        cout<<0;
    }
    return 0;
}
