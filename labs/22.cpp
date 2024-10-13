#include<iostream>
using namespace std;

bool prestapnaGodina(int godina) {
    if(godina%400==0) {
        return true;
    }
    if(godina%4==0) {
        return true;
    }
    if(godina%100==0) {
        return false;
    }
    return false;
}

bool validenDatum(int den, int mesec, int godina) {
    if(mesec<1 || mesec>12) {
        return false;
    }
    
    int denovi_vo_mesec;
    switch(mesec) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            denovi_vo_mesec=31;
            break;
        case 4: case 6: case 9: case 11:
            denovi_vo_mesec=30;
            break;
        case 2:
            if(prestapnaGodina(godina)) {
                denovi_vo_mesec=29;
            } else {
                denovi_vo_mesec=28;
            }
            break;
        default:
        denovi_vo_mesec=0;
        break;
    }
    
    if(den<1 || den>denovi_vo_mesec) {
        return false;
    }
    return true;
}

int main() {
    int den, mesec, godina;
    cin>>den>>mesec>>godina;
    
    if(validenDatum(den, mesec, godina)) {
        cout<<1;
    } else {
        cout<<0;
    }
    return 0;
}
