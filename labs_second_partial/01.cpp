#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double niza[n], sum=0.0;
    for(int i=0;i<n;i++) {
        cin>>niza[i];
        sum+=niza[i];
    }
    
    double srVrednost=sum/n;
    double najblizokElement=niza[0];
    double minRazlika=abs(niza[0]-srVrednost);
    
    for(int i=1;i<n;i++) {
        double razlika=abs(niza[i]-srVrednost);
        if(razlika<minRazlika) {
            minRazlika=razlika;
            najblizokElement=niza[i];
        }
    }
    cout<<fixed<<setprecision(2)<<najblizokElement;
    return 0;
}
