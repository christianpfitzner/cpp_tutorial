#include <iostream>
#include <memory>
 
struct Foo {
    Foo()      { std::cout << "Foo::Foo\n";  }
    ~Foo()     { std::cout << "Foo::~Foo\n"; }
    void bar() { std::cout << "Foo::bar\n";  }
};


struct Aircraft{
    Aircraft() { std::cout << "Airplane" << std::endl; }
    void setWingman(std::shared_ptr<Aircraft> wingman) { _wingman = wingman; }
    std::shared_ptr<Aircraft> _wingman; 

}; 

class Maveric1 : public Aircraft
{
    public: 
        Maveric1()   { std::cout << "Maveric 1 constructed" << std::endl; }
        ~Maveric1()  { std::cout << "Desructor 1"           << std::endl; }
        // void setWingman(std::shared_ptr<Aircraft> wingman) { _wingman = wingman; }

};

class Maveric2 : public Aircraft
{
    public: 
        Maveric2()   { std::cout << "Maveric 2 constructed" << std::endl; }
        ~Maveric2()  { std::cout << "Desructor 2"           << std::endl; }
        // void setWingman(std::shared_ptr<Aircraft> wingman) { _wingman = wingman; }

}; 




int main()
{
    std::unique_ptr<Foo> foo_object_with_new(new Foo); 
    foo_object_with_new->bar(); 

    // right way to initialize a smart pointer
    std::shared_ptr<Foo> shared_foo = std::make_shared<Foo>(); 
    shared_foo->bar(); 

    std::shared_ptr<Foo> shared_foo2(new Foo);                   //! not correct!!! dont do this
    shared_foo2->bar(); 

    std::shared_ptr<Foo> shared_foo3 = shared_foo; 

    // counter now increments + 1
    std::cout << shared_foo.use_count() << std::endl; 

    //delete shared_foo.get();                                    // dont do this
    shared_foo.reset();                                         // this is better

    std::cout << shared_foo.use_count() << std::endl; 




    // example for weak pointer and cross referencing

    // Maveric1 mav1; 
    // Maveric2 mav2; 

    // mav1.setWingman(std; 
    // mav2.setWingman(mav1); 




    


    return 0; 
} 