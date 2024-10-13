/* Write code that will read information about receipts from standard input.
On standard input, 3 receipts are read, which are composed of pairs of values (amount, type_of_tax).
e.g.
10000 A
7500 B
18000 F
Where the first value in the pair is the amount of the receipt, while the second value is a character (A, B, C, D, F... Z)
which indicates what type of value added tax is calculated for that item:
A stands for 18%
B stands for 10%
C stands for 5%
D stands for 0%
If a different character is entered, 15% is calculated
If an receipt exceeds 30 000 den, tax is calculated as on an receipt of 30 000 den.
Receipts that have a negative amount are not valid receipts and are rejected.
The total VAT refund cannot exceed 2100den.
In the first line, print on the standard output how much the total VAT will be on the receipts loaded from the standard input.
In the next line, print on the standard output how much the total VAT refund will be for the receipts loaded from standard input.
The VAT refund is calculated as 15% of the total VAT of the receipts. */

#include<iostream>
using namespace std;
int main() {
    char tip_danok;
    float iznos, vkupno_danok=0, vkupno_povratok=0;
    
    for(int i=0;i<3;i++) {
        cin>>iznos>>tip_danok;
        if(iznos<0) {
            continue;
        }
        if(iznos>30000) {
            iznos=30000;
        }
        
        float danok;
        switch(tip_danok) {
            case 'A':
                danok=iznos*0.18;
                break;
            case 'B':
                danok=iznos*0.10;
                break;
            case 'C':
                danok=iznos*0.05;
                break;
            case 'D':
                danok=0;
                break;
            default:
                danok=iznos*0.15;
                break;
        }
        
        vkupno_danok+=danok;
        float povratok=danok*0.15;
        
        if(vkupno_povratok+povratok>2100) {
            povratok=2100-vkupno_povratok;
        }
        vkupno_povratok+=povratok;
    }
    
    cout<<"Total VAT of the receipts is equal to: "<<vkupno_danok<<"den."<<endl;
    cout<<"Total refund VAT of the receipts is equal to: "<<vkupno_povratok<<"den."<<endl;
    return 0;
}
