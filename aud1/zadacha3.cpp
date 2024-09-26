// programa koja presmetuva perimetar i kvadrat od ploshtina na raznostran triagolnik

#include <iostream>
using namespace std;
int main () {
    float a=5.0 , b=7.5 , c=10.2;
    float L=a+b+c;
    cout<<"Perimetarot na triagolnikot iznesuva: "<<L<<endl;
    float s=L/2;
    float P=s*(s-1)*(s-b)*(s-c);
    cout<<"Kvadratot na ploshtinata e: "<<P<<endl;
    return 0;
}
