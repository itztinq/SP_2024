#include<iostream>
using namespace std;
int main() {
    int broj1, broj2;
    cin>>broj1>>broj2;
    int razlika1=broj1-broj2;
    cout<<"Vrednosta na broj1 i broj2 pred zamena na broevite e: "<<broj1<<","<<broj2<<" a razlikata: "<<razlika1<<endl;
    int tmp=broj1;
    broj1=broj2;
    broj2=tmp;
    int razlika2=broj1-broj2;
    cout<<"Vrednosta na broj1 i broj2 posle zamena na broevite e: "<<broj1<<","<<broj2<<" a razlikata: "<<razlika2<<endl;
    return 0;
}
