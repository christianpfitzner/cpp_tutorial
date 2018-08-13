#include <iostream>
#include <memory>
 
struct Foo {
    Foo() { std::cout << "Foo::Foo\n"; }
    ~Foo() { std::cout << "Foo::~Foo\n"; }
    void bar() { std::cout << "Foo::bar\n"; }
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




    return 0; 
} 