#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<x<<endl;
    int broj;
    bool najdenbroj=false;
    while(cin>>broj){
        int countx=1;
        int tempx=x;
        while(tempx/=10){
            countx++;
        }
        int countbroj=1;
        int tempbroj=broj;
        while(tempbroj/=10){
            countbroj++;
        }
        if(countbroj==countx){
            cout<<broj<<endl;
            najdenbroj=true;
        }
    }
    return 0;
}