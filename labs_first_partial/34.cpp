#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    
    if(a>=b) {
        cout<<0;
        return 0;
    }
    
    int count=0;
    double total=0.0;
    
    for(int i=a+1;i<=b;i++) {
        if(i%2==0) {
            if(i%7==0) {
                cout<<i<<endl;
                count++;
            }
        } else {
            if(i%3!=0) {
                cout<<i<<endl;
                count++;
            }
        }
        total++;
    }
    
    if(count==0) {
        cout<<0;
    } else {
        double percentage=(count/total)*100;
        cout<<percentage<<"%"<<endl;
    }
    return 0;
}
