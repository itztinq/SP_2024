#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int najmal=0;
    int cifra, copy;
    for(int i=m;i<=n;i++){
        copy=i;
        while(copy!=0){
            cifra=copy%10;
            if(cifra%2!=0){
                break;
            } else {
                copy/=10;
                if(copy==0){
                    if(najmal==0){
                        najmal=i;
                    }
                    if(najmal>i){
                        najmal=i;
                    }
                }
            }
        }
    }
    if(najmal==0){
        cout<<"NE";
    }
    else cout<<najmal;
    return 0;
}
