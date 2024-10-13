#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    cout<<setw(5)<<" ";
    for(int i=1;i<=n;i++) {
        cout<<setw(5)<<i;
    }
    cout<<endl;
    
    for(int i=1;i<=n;i++) {
        cout<<setw(5)<<i;
        for(int j=1;j<=n;j++) {
            cout<<setw(5)<<i*j;
        }
        cout<<endl;
    }
    return 0;
}
