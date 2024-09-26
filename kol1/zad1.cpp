#include <iostream>
using namespace std;
int main() {
    int krediti, godina;
    float poeni, prosek;
    cin>>krediti>>godina>>prosek;
    if(krediti>240){
        cout<<"Needs to graduate! ";
    } else if(prosek>9){
        cout<<"Great student! ";
    }
    if(krediti>100 && prosek>8) {
        int predvideni_krediti=(2023-godina)*60;
        poeni=(krediti/predvideni_krediti)*10+(prosek-8.5)*6.5;
        cout<<"Points: "<<poeni;
    } else {
        cout<<"Points: 0";
    }
    return 0;
}