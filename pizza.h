/*-------------------------------------------------------
Description: This is the header file pizza.h. This is the
interface for the class Pizza. Values of this type track
the type, size, and number of toppings a user wants on 
his or her's pizza.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
------------------------------------------------------*/
class Pizza
{
public:
    void setSize(int newSize);
    //Precondition: newSize is set to either 1, 2, or 3.
    //Postcondition: The variable size is set to the value of newSize.
    void setType(int newType);
    //Precondition: newType is set to either 4, 5, or 6.
    //Postcondition: The variable type is set to the value of newType.
    void setNumberOfToppings(int newNumberOfToppings);
    //Precondition: newNumberOfToppings >= 1
    //Postcondition: The variable numberOfToppings is set to the value of newNumberOfToppings.
    int getSize();
    //Returns the value of the variable size.
    int getType();
    //Returns the value of the variable type.
    void description();
    //Outputs a description of the Pizza object.
    double computePrice();
    //Returns the price of the pizza.

private:
    int size;
    int type;
    int numberOfToppings;
};
