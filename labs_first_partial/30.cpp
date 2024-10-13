#include<iostream>
using namespace std;

int najdiNZD(int a, int b) {
    while(b!=0) {
        int tmp=b;
        b=a%b;
        a=tmp;
    }
    return a;
}

int najdiNZS(int a, int b, int nzd) {
    return (a*b)/nzd;
}

int main() {
    int n, m;
    cin>>n>>m;
    
    int nzd=najdiNZD(n, m);
    int nzs=najdiNZS(n, m, nzd);
    
    cout<<"The LCM of "<<n<<" and "<<m<<" is "<<nzs<<endl;
    cout<<"The GCD of "<<n<<" and "<<m<<" is "<<nzd<<endl;
    return 0;
}
