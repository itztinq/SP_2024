#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    int cifra_x, i=1;
    int cifra_y, temp;
    if(y>x){
        temp=y;
        y=x;
        x=temp;
    }
    if(x<=0 || y<=0){
        cout<<"Invalid input"<<endl;
    }
    else if(x<10 || y<10){
        cout<<"NE";
    }
    else {
        while(y!=0){
            cifra_y=y%10;
            cifra_x=x%10;
            if(cifra_y==cifra_x && i%2==0){
                y/=10;
            }
            else {
                x/=10;
                i++;
            }
            if(x==0){
                break;
            }
        }
        if(y==0){
            cout<<"PAREN";
        }
        else {
            cout<<"NE";
        }
    }
    return 0;
}