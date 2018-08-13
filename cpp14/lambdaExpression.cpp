#include <iostream>
#include <complex>

int main()
{
    // Store a generalized lambda, that squares a number, in a variable
    auto func = [](auto input) { return input * input; };

    // Usage examples:
    // square of an int
    std::cout << func(10) << std::endl;

    // square of a double
    std::cout << func(2.345) << std::endl;

    // square of a complex number
    std::cout << func(std::complex<double>(3, -2)) << std::endl;



    /*
     * limit function with return value 
     */
    auto limit = [](const auto value, const auto min, const auto max) {
        auto retval = value; 

        if(retval > max) retval = max; 
        if(retval < min) retval = min; 

        return retval; 
    }; 



    std::cout << limit(1,       10, -10)    << std::endl;       
    std::cout << limit(100,     10, -10)    << std::endl;
    std::cout << limit(2.1234, 3.0, -3.0)   << std::endl;



    auto isInRange = [](const auto value, const auto min, const auto max)
    {
        if(value >= min && value <= max)
            return true;
        
        return false;      
    }; 

    std::cout << isInRange(2,4,-5) << std::endl;


    return 0;
}