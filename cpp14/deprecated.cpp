
#include <iostream>


class Foo
{
    public: 
        Foo() { }
        void deprecated_fkt(void) [[deprecated("deprecated")]]; 
        void good_fkt(void); 

}; 


void Foo::good_fkt(void)
{

}

void Foo::deprecated_fkt(void)
{
    std::cout << "deprecated" << std::endl; 
}



int main(void)
{
    Foo f; 
    f.deprecated_fkt(); 
    f.good_fkt(); 


    return 0; 
}