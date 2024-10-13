#include<iostream>
using namespace std;
int main(){
    int tricifren, cetiricifren;
    cin>>tricifren>>cetiricifren;
    int cifra0=tricifren/100;
    int cifra2=tricifren%10;
    int cifra1=(cetiricifren/100)%10;
    int cifra3=cetiricifren%10;
    double sum=(cifra0+cifra1+cifra2+cifra3)/4.0;
    cout<<sum;
    return 0;
}
