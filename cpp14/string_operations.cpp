

#include <string>
#include <iostream>


int main(void)
{
    int a                = 1; 
    std::string a_string = std::to_string(a); 
    std::cout << a_string << std::endl; 

    double b             = 2.2; 
    std::string b_string = std::to_string(b); 
    std::cout << b_string << std::endl; 


    const auto c        = 0.1f; 
    const auto c_string = std::to_string(c); 
    std::cout << c_string << std::endl; 
    std::atoi(c_string); 



    return 0; 
}


