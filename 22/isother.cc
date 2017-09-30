bool isOther(char ch)                               
{
    std::string others = "-_.~";                          // chars to skip
    return others.find(ch) != std::string::npos;
}
