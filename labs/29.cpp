#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    double total_suma=0;
    double total_zashteda=0;
    
    for(int i=0;i<n;i++) {
        double cena;
        char popust;
        cin>>cena>>popust;
        
        double iznos_popust=0;
        switch(popust) {
            case 'A':
                iznos_popust=cena*0.2;
                break;
            case 'B':
                iznos_popust=cena*0.5;
                break;
            case 'C':
                iznos_popust=cena*0.7;
                break;
            case 'D':
                iznos_popust=0;
                break;
        }
        
        total_suma+=cena-iznos_popust;
        total_zashteda+=iznos_popust;
    }
    cout<<total_suma<<endl;
    cout<<total_zashteda<<endl;
    return 0;
}
