#include <iostream>
#include<cstdlib>
#include "product.h"
#include "furniture.h"
#include "wardrobe.h"
#include "rack.h"
#include "sofa.h"
#include "table.h"


using namespace std;

int main()
{
    system("cls");
    int i,b;
    cout<<"\t"<<"Enter type product:"<<endl;
    cout<<"1. Wardrobe"<<endl;
    cout<<"2. Rack"<<endl;
    cout<<"3. Sofa"<<endl;
    cout<<"4. Table"<<endl;

    cout<<"Input: "; cin>>i;

    if (i==1)
    {
    wardrobe Built_in_wardrobe;

    Built_in_wardrobe.setname("Built-in wardrobe");
    Built_in_wardrobe.setsize("All over the wall");
    Built_in_wardrobe.setcolor("Brown");
    Built_in_wardrobe.setmaterial("Tree");
    Built_in_wardrobe.setnum_of_shelves("Four");
    Built_in_wardrobe.print();
    }


    if (i==2)
    {
    rack Shelf;

    Shelf.setname("Shelf rack");
    Shelf.setsize("All over the wall");
    Shelf.setcolor("Black");
    Shelf.setmaterial("Metal");
    Shelf.setnum_of_section("Ten");
    Shelf.print();
    }


    if (i==3)
    {
    sofa Folding;

    Folding.setname("Folding sofa");
    Folding.setsize("Long");
    Folding.setcolor("White");
    Folding.setmaterial("Plywood");
    Folding.setCoating("The cloth");
    Folding.print();
    }


    if (i==4)
    {
    table Glass;

    Glass.setname("Glass table");
    Glass.setsize("Long");
    Glass.setcolor("Grey");
    Glass.setmaterial("Metal");
    Glass.print();
    }





    return 0;
}
