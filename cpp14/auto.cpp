


#include <iostream>
#include <vector>

#include <typeinfo>
int main(void)
{
    const auto a = 1;       // integer
    std::cout << sizeof(a)        << std::endl; 
    std::cout << typeid(a).name() << std::endl; 



    const auto b = 1.1;     // double
    std::cout << sizeof(b)        << std::endl;
    std::cout << typeid(b).name() << std::endl; 


    const auto c = 1.1f;    // double
    std::cout << sizeof(c)        << std::endl;
    std::cout << typeid(c).name() << std::endl; 



    const auto d = "hallo";    // double
    std::cout << sizeof(d)        << std::endl;
    std::cout << typeid(d).name() << std::endl; 




    std::vector<int> vec{1, 2, 3}; 

    // auto loop
    for(const auto v : vec)
    {
        std::cout << v << std::endl; 
    }


}