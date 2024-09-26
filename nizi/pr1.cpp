#include <iostream>
using namespace std;
int main (){
    int broj[10], n;
    float prosek=0;
    cout<<"vnesuvaj broevi: "<<endl;
    for(n=0;n<10;n++){
        cin>>broj[n];
    }
    for(n=0;n<10;n++){
        prosek+=broj[n];
    }
    prosek/=n;
    cout<<"prosekot na vnesenite broevi e: "<<prosek<<endl;
    for(n=0;n<10;n++){
        cout<<broj[n]<<(broj[n]>prosek?">":"<=")<<prosek<<endl;
    }
    return 0;
}
