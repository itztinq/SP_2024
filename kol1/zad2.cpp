#include <iostream>
using namespace std;
int main() {
    int num, rez;
    cin>>num;
    if(num<24){
        rez=num*5;
    } else if(num<=36){
        rez=num*5+30;
    } else if (num<60){
        rez=num*5+60;
    } else {
        cout<<"Studentot ne e usluzen";
        return 0;
    }
    rez-=5;
    cout<<"Hours: "<<rez/60<<", minutes: "<<rez%60;
    return 0;
}