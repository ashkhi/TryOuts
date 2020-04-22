#include <iostream>

using namespace std;

/*
    Encapsulation means wrapping of information and data under
    single unit. In OOP terms it can be thought of as binding
    together data and functions together that manipulate the same.

    Encapsulation leads to abstraction as it also hides the data.

    In C++ encapsulation can be implemented using class and
    access modifiers. The data can have binding with the
    functions that manipulate the same. Getter and setter 
    methods play the role in this example.

    The access specifiers also play an important role in the
    binding. The private data members are not directly accessible
    to the world. Getter and setter methods are public and using
    these APIs, the world can access the private members.

    Encapsulation unlike abstraction is more of a implementation
    level activity rather than the design level activity.
*/

class EncapsulationExample
{
    private:
        int a;
        int b;
        int result;
    
    public:
        EncapsulationExample();
        ~EncapsulationExample();

        int getA();
        void setA(int);

        int getB();
        void setB(int);

        int getResult();
        
        void addTwoNumbers();
};