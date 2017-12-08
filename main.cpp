//Program creates and outputs the description and price of various pizzas using
//the Pizza class.
#include <iostream>
#include "pizza.h"

using namespace std;

const int SMALL = 1, MEDIUM = 2, LARGE = 3, DEEP_DISH = 4, HAND_TOSSED = 5, PAN = 6;

void displayMenu();
//Display the menu for pizzas.

void input(Pizza& p);
//Postcondition: Pizza object p has been filled with information.

void output(Pizza& p);
//Precondition: Pizza object p's information has all been set.
//Postcondition: Prints out the description of of Pizza object p.

int main()
{
    Pizza pizza;

    displayMenu();
    input(pizza);
    output(pizza);

    return 0;
}

void displayMenu()
{
    cout<<"-------------------------------------------------------------\n";
    cout<<"|                      Pizza Types                          |\n";
    cout<<"|                  ------------------                       |\n";
    cout<<"|                     (4) Deep Dish                         |\n";
    cout<<"|                     (5) Hand Tossed                       |\n";
    cout<<"|                     (6) Pan                               |\n"; 
    cout<<"|                                                           |\n";
    cout<<"|                      Pizza Sizes                          |\n";
    cout<<"|                   -----------------                       |\n";
    cout<<"|                      (1) Small                            |\n";
    cout<<"|                      (2) Medium                           |\n";
    cout<<"|                      (3) Large                            |\n";
    cout<<"|                                                           |\n";
    cout<<"|                      Pizza Prices                         |\n";
    cout<<"|         ----------------------------------------          |\n";
    cout<<"|           Small pizza = $10 + $2 per topping              |\n";
    cout<<"|           Medimum pizza = $14 + $2 per topping            |\n";
    cout<<"|           Large pizza = $17 + $2 per topping              |\n";
    cout<<"-------------------------------------------------------------\n";
    cout<<endl;
}

void input(Pizza& p)
{
    cout<<"What type of pizza would you like? ";
    int type;
    cin>>type;
    p.setType(type);

    cout<<endl;

    cout<<"What size of pizza? ";
    int size;
    cin>>size;
    p.setSize(size);

    cout<<endl;

    cout<<"How many toppings altogether? ";
    int toppings;
    cin>>toppings;
    p.setNumberOfToppings(toppings);

    cout<<endl;
} 

void output(Pizza& p)
{
    p.description();

    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"Your pizza cost: $"<<p.computePrice()<<endl;
    cout<<endl;
}
