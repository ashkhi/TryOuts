#pragma once
#include <iostream>

using namespace std;

/*
    This is a simple singleton example. Here is what you should
    be doing to acomplish this.
    - create private static Singleton object
    - private constructor
    - public static Singleton getInstance method

    do not forget to initialize the private static singleton object
    with nullptr in the implementation file.

    This is a lazy initialization example. There can be eager
    instantiation too where the declaration of static Singleton
    object itself calls the constructor in class file.

    This singleton example is not thread safe and it is prone to
    multiple copies issue.

    That can be resolved, and will add an example in thread safe
    version (double check locking) with private copy constructor
    and overloaded = op
*/

class MySingleton
{
    private:
        static MySingleton *object;
        MySingleton();

    public:
        int num;

        static MySingleton * getInstance();
};