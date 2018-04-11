#include "parser.ih"

void Parser::list()
{
    std::map<std::string, unsigned> ordered(d_symtab.begin(), d_symtab.end());
    for(auto it = ordered.begin(); it != ordered.end(); ++it)
    {
         std::cout << it->first << ' ';
         std::cout << d_value[it->second] << '\n';
    }
    std::cout << '\n';
}


