#include<iostream>
using namespace std;

int presmetajPoeni(int n, int p1, int c1, int p2, int c2, int p3) {
    if(n>c2) {
        return n*p3;
    } else if(n>c1) {
        return n*p2;
    } else {
        return n*p1;
    }
}

int main() {
    int p1, c1, p2, c2, p3;
    cin>>p1>>c1>>p2>>c2>>p3;
    int a, b, c;
    cin>>a>>b>>c;
    
    int poeni=0;
    poeni+=presmetajPoeni(a, p1, c1, p2, c2, p3);
    poeni+=presmetajPoeni(b, p1, c1, p2, c2, p3);
    poeni+=presmetajPoeni(c, p1, c1, p2, c2, p3);
    
    cout<<poeni<<endl;
    return 0;
    
}
