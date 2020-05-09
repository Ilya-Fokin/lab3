#include <iostream>
#include "product.h"

using namespace std;

product::product()
{
name = "none";
size= "none";
color = "none";
}

product::product(string name, string size, string color):product()
{
setname(name);
setsize(size);
setcolor(color);
}

product::product(const product &Product)
{
this-> name = Product.name;
this-> size= Product.size;
this-> color = Product.color;
}

void product::setname(string Name)
{
this->name=Name;
}

void product::setsize(string Size)
{
this->size=Size;
}

void product::setcolor(string Color)
{
this->color=Color;
}

string product::getname() const
{
return name;
}

string product::getsize() const
{
return size;
}

string product::getcolor() const
{
return color;
}

void product::operator=(product &product1)
{
setname(product1.name);
setsize(product1.size);
setcolor(product1.color);
}
