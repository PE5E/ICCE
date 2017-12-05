#include "binops.ih"

Operations Binops::add(Addition firstOp, Operations const &secondOp)
{

    return secondOp; // tijdelijk
//    return static_cast<Operations *>(&firstOp)->add(secondOp);
}
   
