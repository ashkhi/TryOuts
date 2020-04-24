#pragma once
#include "Parent.h"

class ChildTwo : public Parent
{
    public:
        ChildTwo();
        ~ChildTwo();

        void printMyAge();
        void childrenIhave();
};