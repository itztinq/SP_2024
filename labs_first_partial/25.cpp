#include<iostream>
using namespace std;
int main() {
    int kategorija, godini;
    cin>>kategorija>>godini;
    int cena=0;
    switch(kategorija) {
        case 1:
            cena=8;
            break;
        case 2:
            if(godini<12) cena=8;
            else if(godini>=12) cena=12;
            break;
        case 3:
            if(godini<12) cena=10;
            else if(godini>=12) cena=15;
            break;
        case 4:
            if(godini<17) cena=15;
            else if(godini>=17) cena=18;
            break;
        default:
            cena=0;
            break;
    }
    cout<<"Price: "<<cena<<"$"<<endl;
    return 0;
}
