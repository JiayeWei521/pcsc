#include <iostream>

// Declare in advance the daughter class
// this is called the "forward" declaration
template<typename T> class BoxTyped;

// The mother class of any typed box
class Box
{
public:
    Box(){};
    virtual ~Box(){};
    // The type is unknown to the mother: needs to be pure virtual.
    virtual const std::type_info &type() = 0;
};

template<typename T> class BoxTyped : public Box
{
public:
    BoxTyped(){};

    ~BoxTyped() override
    {
        delete ptr;
    }

    BoxTyped(const T&)
    {

    }

    // return type information
    const std::type_info &type() override
    {
        return typeid(T);
    }

    // The operator '='  can receive a parameter of type T
    T& operator=(const T& input)
    {
        *ptr = input;
        return *ptr;
    }

    // Access the value pointed to by the pointer: de-reference operation
    T& operator*()
    {
        return *ptr;
    }

private:
    // the raw pointer to store our boxed value
    T* ptr;
};


int main()
{
    BoxTyped<int> box;
    *box = 2;
    Box &anonymoius_box = box;
    std::cout << anonymoius_box.type().name() << std::endl;
}