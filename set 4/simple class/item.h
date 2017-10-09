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
    std::string itemNr;


    public:                 // nu volgt publieke deel
                            // terug switchen kan weer met private:

                            // in het publieke deel komen de declaraties van functies
                            // die publiek te benaderen zijn. eindigend met een ;
        void setItem(std::string);
        void printItem(void);


};  // hier kan voor de ; een naam gegeven worden voor de members. bijv. artikelen.

        
#endif


// dit is de (externe) header file.


