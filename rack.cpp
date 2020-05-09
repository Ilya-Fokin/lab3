#include <iostream>
#include "rack.h"
#include "furniture.h"

using namespace std;

rack::rack():furniture(), num_of_section("none")
{
}
rack::rack(string name, string size, string color, string material, string num_of_section):furniture(name, size, color, material),num_of_section("none")
{
    setnum_of_section(num_of_section);
}

void rack::setnum_of_section(string Num_of_section)
{
    this->num_of_section=Num_of_section;
}

string rack::getnum_of_section() const
{
    return num_of_section;
}

void rack::operator= (rack &Rack)
{
    setnum_of_section(Rack.num_of_section);
}

void rack::print() const
  {

    cout<<"\t"<<"Information about rack:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Size: "<<size<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Material: "<<material<<endl;
    cout<<"Number of section: "<<num_of_section<<endl<<endl;
  }
