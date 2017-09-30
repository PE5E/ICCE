std::string decToHex(size_t num)
{
    size_t radix = 16;
    std::string buff = "";
    while (num != 0)
    {
        size_t remainder = num % radix;
        if (remainder > 9)
            buff.insert(0, 1, 'A' + remainder - 10);
        else
            buff.insert(0, 1, '0' + remainder); 
        num /= radix;
    }
    if (buff.length() != 2) buff.insert(0,1,'0');       // trailing zero
    return buff;
}
