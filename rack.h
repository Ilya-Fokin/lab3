#ifndef RACK_H_INCLUDED
#define RACK_H_INCLUDED
#include "furniture.h"

using namespace std;

class rack: public furniture
{
protected:
    string num_of_section;

public:
    rack();
    rack(string name, string size, string color, string material, string num_of_section);

    void setnum_of_section(string Num_of_section);
    string getnum_of_section() const;

    void print() const override;
    void operator= (rack &Rack1);
};

#endif // RACK_H_INCLUDED
