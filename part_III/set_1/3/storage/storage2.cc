#include "storage.ih"

Storage::Storage(initializer_list<size_t> const &list)
{
    d_data.assign(list);
}
