#include <iostream>
#include "furniture.h"
#include "table.h"

using namespace std;

table::table():furniture(){}
table::table(string name, string size, string color, string material):furniture(name, size, color, material)
{
}

void table::print() const
{
cout <<"\t"<<"Information about table:" << endl;
cout<<"Name: "<<name<<endl;
cout<<"Size: "<<size<<endl;
cout<<"Material: "<<material<<endl;
cout<<"Color: "<<color<<endl<<endl;
}
