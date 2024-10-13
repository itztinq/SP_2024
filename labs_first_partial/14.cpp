#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    int poeni=a+b+c+d+e;
    if(poeni<=50) {
        cout<<"Predmetot ne e polozen"<<endl;
    } else {
        int ocenka;
        ocenka = (poeni <= 60) ? 6 :
                 (poeni <= 70) ? 7 :
                 (poeni <= 80) ? 8 :
                 (poeni <= 90) ? 9 : 10;
        cout<<"Ocenka: "<<ocenka<<", poeni: "<<poeni<<endl;
        
        if (ocenka == 10 && poeni == 100) {
            return 0;
        }
        if (ocenka != 10 && poeni == (ocenka * 10)) {
              cout << "Ima uslov za povisoka ocenka" << endl;
        } else {
              cout << "Nema uslov za povisoka ocenka" << endl;
        }
    }
    return 0;  
}
