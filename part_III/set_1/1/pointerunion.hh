#ifndef POINTERUNION_HH
#define POINTERUNION_HH

union PointerUnion
{
    int (*fp)(int const &, int const &);
    void *vp;
};

#endif // POINTERUNION_HH
