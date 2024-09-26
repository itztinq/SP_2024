#include <iostream>
using namespace std;
int main() {
    int n1, n2, i;
    int a[100], b[100];
    cout<<"Dolzina na prvata niza: ";
    cin>>n1;
    cout<<"Dolzina na vtorata niza: ";
    cin>>n2;
    if(n1!=n2) {
        cout<<"Ne se ednakvi"<<endl;
    }
    else {
        cout<<"Elementi na prvata: "<<endl;
        for(i=0;i<n1;i++){
            cin>>a[i];
        }
        cout<<"Elementi na vtorata: "<<endl;
        for(i=0;i<n2;i++){
            cin>>b[i];
        }
        for(i=0;i<n1;i++){
            if(a[i]!=b[i]){
                break;
            }
        }
        if(i==n1){
            cout<<"Ednakvi se"<<endl;
        } else{
            cout<<"Ne se ednakvi"<<endl;
        }
    }
    return 0;
}