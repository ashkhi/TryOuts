#pragma once
#include <iostream>
#include <map>

using namespace std;

/*
    This is a simple multiton example that creates two objects and
    shares them. Here is what you should be doing to acomplish this.
    - create private static multitonMap object <int, Multiton *>
    - private constructor
    - public static multiton getInstance method : int as parm

    Do not forget to initialize the private static multitonMap object
    with an empty map in the implementation file.

    This is a lazy initialization example. There can be eager
    instantiation too where the declaration of static Multiton
    object itself calls the constructor in class file.

    This Multiton example is not thread safe and it is prone to
    more than two copies issue.
    
    That can be resolved, and will add an example in thread safe
    version (double check locking) with private copy constructor
    and overloaded = op
*/

class MyMultiton
{
    private:
        static map <int, MyMultiton *> * multitonMap;
        MyMultiton();

    public:
        int num;
        static MyMultiton* getInstance(int);
};