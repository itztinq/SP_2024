#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int x, n;
    cin>>x>>n;
    
    string x_str=to_string(x);
    bool najdeno=false;
    
    for(int i=0;i<n;i++) {
        int broj;
        cin>>broj;
        
        string broj_str=to_string(broj);
        if(broj_str.find(x_str)!=string::npos) {
            cout<<broj<<endl;
            najdeno=true;
        }
    }
    
    if(!najdeno) {
        cout<<"Nema"<<endl;
    }
    return 0;
}
