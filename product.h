#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

using namespace std;

class product
{
protected:
string name;
string size;
string color;

public:
product();
product(string name, string size, string color);
product(const product &Product);

void setname(string Name);
void setsize(string Size);
void setcolor (string Color);

string getname()const;
string getsize() const;
string getcolor() const;

virtual void print() const = 0;

void operator= (product &product1);
};


#endif // PRODUCT_H_INCLUDED
