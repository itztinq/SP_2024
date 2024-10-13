#include<iostream>
using namespace std;
int main() {
    int grama_jabolka, grama_malini, grama_banani;
    bool studentska_karticka;
    cin>>grama_jabolka>>grama_malini>>grama_banani>>studentska_karticka;
    
    double cena_jabolka=30.0;
    double cena_malini=50.0;
    double cena_banani=40.0;
    
    double jabolka_total=(grama_jabolka/100.0)*cena_jabolka;
    double malini_total=(grama_malini/100.0)*cena_malini;
    double banani_total=(grama_banani/100.0)*cena_banani;
    
    if(grama_jabolka>=500) {
        jabolka_total*=0.5; //50% popust
    } else if(grama_jabolka==200) {
        jabolka_total*=0.7; //30% popust
    }
    
    if(grama_malini>=500) {
        malini_total*=0.5; //50% popust
    } else if(grama_malini==200) {
        malini_total*=0.7; //30% popust
    }
    
    if(grama_banani>=500) {
        banani_total*=0.5; //50% popust
    } else if(grama_banani==200) {
        banani_total*=0.7; //30% popust
    }
    
    double total_suma=jabolka_total+malini_total+banani_total;
    
    if(studentska_karticka) {
        total_suma-=140;
    }
    
    cout<<total_suma;
    return 0;
}
