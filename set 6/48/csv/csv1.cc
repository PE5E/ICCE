CSV::CSV(size_t field, char fieldSep = ',')
{
    bigPtr = new std::string **[1];   // allocate array of line pointers
    bigPtr[0] = new std::string *[1]; // allocate array of string pointers (line)
}
