#ifndef INCLUDED_ITEM_
#define INCLUDED_ITEM_

// #include <iosfwd>    // includen als header hiervan gebruik maakt/ Hier dus niet nodig

#include <string>       // string hier includen omdat std::string gedeclareerd wordt 
                        // in deze header
                        // let op: geen using namespace in externe header!!!


class Item
{
                            // begint altijd private
                            // eerst komen de declaraties van variabelen die afgeschermd worden
                            // dus alle interne variabelen van de class
                            // alle interne variabelen beginnen met d_

    std::string d_name;     // name of item
    std::string d_category; // category field
    std::string d_itemNr;   // item number
    double d_price;         // price in euro

    public:                 // nu volgt publieke deel met de member functions
                            // terug switchen kan weer met private:

                            // in het publieke deel komen de declaraties van functies
                            // die publiek te benaderen zijn. eindigend met een ;

        void setName(std::string const &name);
        void setCategory(std::string const &category);
        void setItemNr(std::string const &itemNr);
        void setPrice(double const price);

        void printItem(void);



};  // hier kan voor de ; een naam gegeven worden voor de members. bijv. artikelen.

        
#endif


// dit is de (externe) header file.


