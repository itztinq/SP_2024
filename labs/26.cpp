#include<iostream>
using namespace std;
int main() {
    int ocenki[6];
    for(int i=0;i<6;i++) {
        cin>>ocenki[i];
    }
    
    double sum_5=0;
    for(int i=0;i<5;i++) {
        sum_5+=ocenki[i];
    }
    double prosek_5=sum_5/5;
    
    double sum_6=0;
    for(int i=0;i<6;i++) {
        sum_6+=ocenki[i];
    }
    double prosek_6=sum_6/6;
    
    double najdobar_prosek;
    int zapishani_predmeti;
    if(prosek_6>prosek_5) {
        najdobar_prosek=prosek_6;
        zapishani_predmeti=6;
    } else {
        najdobar_prosek=prosek_5;
        zapishani_predmeti=5;
    }
    
    cout<<"Enrolled "<<zapishani_predmeti<<" subjects"<<endl;
    
    if(zapishani_predmeti==6 && najdobar_prosek>=8.5) {
        cout<<1;
    } else {
        cout<<0;
    }
    return 0;
}
