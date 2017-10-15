// There should be just one member add, which must be able to add either
//  a std::string or a NTBS (called `the next string' in the following
//  itemization) to the Strings object. This member should perform 
// the following tasks:
//   -copy the currently stored strings to a new storage area
//   -add the next string to the new storage area
//   -destroy the information pointed at by d_str
//   -update d_str and d_size so that they refer to the new storage area. 
