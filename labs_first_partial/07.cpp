#include<iostream>
using namespace std;
int main() {
    int broj;
    cin>>broj;
    if(broj>=100||broj<=999){
        int edinici=broj%10;
        int desetki=(broj/10)%10;
        int stotki=broj/100;
        cout<<"Vrednosta na stotki, desetki i edinici e: "<<stotki<<","<<desetki<<","<<edinici<<endl;
        bool ediniciParenBroj=(edinici%2==0);
        cout<<"Vredonsta na promenlivata ediniciParenBroj e "<<(ediniciParenBroj?"1":"0")<<endl;
    }
    else cout<<"Vneseniot broj ne e tricifren"<<endl;
    return 0;
}
