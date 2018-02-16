#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

class Storage
{
    std::vector<size_t> d_data;

    public:
        Storage() = default;
        Storage(std::initializer_list<size_t> const &list);

        size_t operator[](size_t idx) const;
        size_t &operator[](size_t idx);
};
        
#endif
