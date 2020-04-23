#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
    The capability of a class to derive properties and 
    characteristics from another class is called Inheritance.

    Sub Class: The class that inherits properties from another
    class is called Sub class or Derived Class or Child class.

    Super Class: The class whose properties are inherited by
    sub class is called Base Class or Super class or Parent class.

    My Shape is a parent class. This gets extended by line and
    triangle child classes.

    The inheritance type is public. In public type, the public
    members of the parent class remain public in child class.
    Protected members of the parent class remain protected and
    private members are not accessible to the child class.
    For other types please refer table below.

    -----------------------------------------------------------------------
    |    Type (C)   |    Public     |     Private     |     Protected     |
    |---------------|               |                 |                   |
    |    Access (P) |               |                 |                   |
    |---------------|---------------|-----------------|-------------------|
    |    Public     |    Public     |     Private     |     Protected     |
    |---------------|---------------|-----------------|-------------------|
    |    Protected  |   Protected   |     Private     |     Protected     |
    |---------------|---------------|-----------------|-------------------|
    |    Private    |  NA (hidden)  |   NA (hidden)   |    NA (hidden)    |
    -----------------------------------------------------------------------
*/

class MyShape
{
    private:
        int dimension;
           
    public:
        MyShape();
        ~MyShape();

        string* color;

        int getDimension();
        void setDimension(int);
};