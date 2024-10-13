#include<iostream>
using namespace std;
int main(){
    int oceni[5];
    float prosek=0;
    for(int i=0;i<5;i++){
        cin>>oceni[i];
    }
    for(int i=0;i<5;i++){
        prosek+=oceni[i];
    }
    prosek/=5.0;
    cout<<"Average grade: "<<prosek;
    return 0;
    
}
