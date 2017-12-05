#include "binops.ih"

Operations Binops::add(Addition firstOp, Operations const &secondOp)
{
    return static_cast<Operations *>(&firstOp)->add(secondOp);
}
   
