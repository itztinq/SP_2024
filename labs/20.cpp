#include<iostream>
#include<string>
using namespace std;

int odrediOperator(string broj) {
    string prefiks=broj.substr(0,3);
    if(prefiks=="071" || prefiks=="072" || prefiks=="073") {
        return 1;
    } else if(prefiks=="074" || prefiks=="075" || prefiks=="076") {
        return 2;
    } else {
        return 0;
    }
}

int main() {
    string broj1, broj2;
    int minuti;
    cin>>broj1>>broj2>>minuti;
    
    int operator1=odrediOperator(broj1);
    int operator2=odrediOperator(broj2);
    
    double cena;
    if(minuti<=30) {
        cena=minuti*3;
    } else {
        cena=30*3+(minuti-30)*2;
    }
    
    if(operator1==operator2 && operator1!=0) {
        cena*=0.7; //30% popust
    }
    
    cout<<cena;
    return 0;
}
