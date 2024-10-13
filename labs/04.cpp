#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    double sredna_vrednost=(x+y)/2.0;
    x+=sredna_vrednost;
    y-=sredna_vrednost;
    cout<<"Razlikata e: "<<x-y;
    return 0;
}
