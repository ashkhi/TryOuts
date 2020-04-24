#pragma once
#include <iostream>

using namespace std;

/*
    The word polymorphism means having many forms or the
    ability of a message to be displayed in more than one form.
    this is why polymorphism is considered as one of the
    important features of object oriented programming.

    there are two main types of polymorphism
    - Compile time polymorphism
    - run time polymorphism

    In compile time polymorphism there can be three sub types
        - method / function overloading
        - operator overloading
        - method / function overriding
    In run time polymorphism there is one sub type
        - virtual functions (overriding)

    Here in the exampleRunner,
    - setAge() function is overloaded to accept integer as well as
    floating point values.
    - '+' operator is overloaded and that adds age of two parents
    - childrenIHave() function is overriden in the child classes,
    however that function is not virtual and hence the parent
    function would be called even with child class objects.
    This binding happens at compile time.
    - printMyAge() function is also overriden, however it is a
    virtual function. Hence the child class functions get executed
    when called.
    This binding happens at run time.
*/

class Parent
{
    private:
        int age;

    public:
        Parent();
        ~Parent();

        int getAge();
        void setAge(int);

        void setAge(float);

        virtual void printMyAge();
        void childrenIhave();

        Parent operator + (Parent& obj1)
        {
            Parent p1;
            p1.setAge(obj1.getAge() + p1.getAge());
            return p1;
        }
};