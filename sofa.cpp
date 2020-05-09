#include <iostream>
#include "sofa.h"
#include "furniture.h"
using namespace std;

sofa::sofa():furniture(), Coating("none")
{
}
sofa::sofa(string name, string size, string color, string material, string num_of_section):furniture(name, size, color, material),Coating("none")
{
setCoating(Coating);
}

void sofa::setCoating(string coating)
{
this->Coating=coating;
}

string sofa::getCoating() const
{
return Coating;
}

void sofa::operator= (sofa &Sofa)
{
setCoating(Sofa.Coating);
}

void sofa::print() const
{
    cout<<"\t"<<"Information about sofa:"<<endl;
    cout<<"Name:  "<<name<<endl;
    cout<<"Size:  "<<size<<endl;
    cout<<"Color:  "<<color<<endl;
    cout<<"Material: "<<material<<endl;
    cout<<"Coating:  "<<Coating<<endl<<endl;
}
