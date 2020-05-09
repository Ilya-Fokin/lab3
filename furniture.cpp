#include <iostream>
#include "product.h"
#include "furniture.h"

using namespace std;

furniture::furniture():product(), material("none")
{
}

furniture::furniture(string name, string size, string color, string material ):product(name, size, color), material("none")
{
setmaterial(material);
}

furniture::furniture(const furniture &Product)
{
this->material=Product.material;
}

void furniture::setmaterial(string Material)
{
this->material=Material;
}

string furniture::getmaterial() const
{
return material;
}

void furniture::operator=(furniture &ProductF)
{
(setmaterial(ProductF.material));
}

void furniture::print() const
{
cout<<"Information about furniture:"<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Size: "<<size<<endl;
cout<<"Color: "<<color<<endl;
cout<<"Material: "<<material<<endl<<endl;
}
