#ifndef SOFA_H_INCLUDED
#define SOFA_H_INCLUDED
#include "furniture.h"
using namespace std;

class sofa: public furniture
{
protected:
string Coating;

public:
sofa();
sofa(string name, string size, string color, string material, string Coating);

void setCoating(string coating);
string getCoating() const;

void print() const override;
void operator= (sofa &Sofa1);

};


#endif // SOFA_H_INCLUDED
