#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a,b,c<1||a,b,c>9){
        return 1;
    }
    int novbroj=a*100+b*10+c;
    cout<<novbroj<<endl;
    cout<<novbroj-a<<" "<<novbroj-b<<" "<<novbroj-c<<endl;
    return 0;
}
