#pragma once
#include "Parent.h"

class ChildOne : public Parent
{
    public:
        ChildOne();
        ~ChildOne();

        void printMyAge();
        void childrenIhave();
};