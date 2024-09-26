#include <iostream>
using namespace std;
int main(){
    int i;
    int meseci[]={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(i=0;i<=12;i++){
        cout<<"mesecot broj "<<i<<" ima "<<meseci[i]<<" denovi"<<endl;
    }
    return 0;
}
