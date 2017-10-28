void fun(...);                      // compiles, does not link

int main()
{
    fun();
    fun("with functions");
    fun(1, 2, 3);
}
        
