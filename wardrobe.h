#ifndef WARDROBE_H_INCLUDED
#define WARDROBE_H_INCLUDED
#include "furniture.h"

using namespace std;

class wardrobe : public furniture
{
protected:
    string num_of_shelves;

public:
  wardrobe();
  wardrobe(string name,string size,string color, string material,string num_of_shelves);

  void setnum_of_shelves(string Num_of_shelves);
  string getnum_of_shelves() const;

  void print() const override;
  void operator=(wardrobe &Wardrobe1);
};


#endif // WARDROBE_H_INCLUDED
