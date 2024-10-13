#include<iostream>
using namespace std;
int transform(int broj){
    if(broj==0){
        return 0;
    }
    int poslednaCifra=broj%10;
    int transformiranBroj=transform(broj/10);
    if(poslednaCifra%2!=0){
        poslednaCifra-=1;
    }else{
        poslednaCifra=0;
    }
    return transformiranBroj*10+poslednaCifra;
}
int main(){
    int broj;
    cin>>broj;
    int transformiranBroj=transform(broj);
    cout<<"Brojot e "<<transformiranBroj<<endl;
    return 0;
}
