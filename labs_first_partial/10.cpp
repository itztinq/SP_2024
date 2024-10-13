#include<iostream>
using namespace std;
int main() {
    int broj;
    cin>>broj;
    
    int najleva=broj/10000;
    int najdesna=broj%10;
    
    int iskastren=(broj/10)%1000;
    int zbir=najleva+najdesna;
    
    cout<<iskastren<<endl;
    cout<<zbir<<endl;
    return 0;
}
