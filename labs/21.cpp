#include<iostream>
using namespace std;
int main() {
    string film_type, popcorn_size, drink_type, day;
    int popcorn_count, drink_count, visa_card;
    cin>>film_type>>popcorn_size>>popcorn_count>>drink_type>>drink_count>>day>>visa_card;
    
    int ticket_price=200;
    int ticket_per_person=ticket_price;
    
    if(film_type=="comedy") {
        ticket_per_person+=20;
    } else if(film_type=="action") {
        ticket_per_person+=40;
    } else if(film_type=="romance") {
        ticket_per_person+=30;
    }
    
    int total_ticket_price=ticket_per_person*4;
    if(day=="Wednesday" && visa_card==1) {
        total_ticket_price/=2; //50% popust
    }
    
    int popcorn_price=0;
    if(popcorn_size=="S") {
        popcorn_price=100;
    } else if(popcorn_size=="M") {
        popcorn_price=150;
    } else if(popcorn_size=="L") {
        popcorn_price=200;
    }
    int total_popcorn_price=popcorn_price*popcorn_count;
    
    int drink_price=0;
    if(drink_type=="Water") {
        drink_price=80;
    } else if(drink_type=="Fanta" || drink_type=="CocaCola" || drink_type=="Sprite") {
        drink_price=100;
    } else if(drink_type=="IceTea") {
        drink_price=120;
    }
    int total_drink_price=drink_price*drink_count;
    
    int total_price=total_ticket_price+total_popcorn_price+total_drink_price;
    cout<<total_price;
    return 0;
    
}
