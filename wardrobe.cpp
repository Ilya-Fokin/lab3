#include <iostream>
#include "wardrobe.h"
#include "furniture.h"

using namespace std;

wardrobe::wardrobe():furniture(), num_of_shelves("none")
{
}
wardrobe::wardrobe(string name, string size, string color, string material, string num_of_shelves):furniture(name, size, color, material), num_of_shelves("none")
{
    setnum_of_shelves(num_of_shelves);
}

void wardrobe::setnum_of_shelves(string Num_of_shelves)
{
    this->num_of_shelves=Num_of_shelves;
}

string wardrobe::getnum_of_shelves() const
{
    return num_of_shelves;
}

void wardrobe::operator= (wardrobe &Wardrobe)
{
    setnum_of_shelves(Wardrobe.num_of_shelves);
}

void wardrobe::print() const
  {

    cout<<"\t"<<"Information about wardrobe:"<<endl;
    cout<<"Name:  "<<name<<endl;
    cout<<"Size:  "<<size<<endl;
    cout<<"Color:  "<<color<<endl;
    cout<<"Material: "<<material<<endl;
    cout<<"Number of shelves:  "<<num_of_shelves<<endl<<endl;
  }
