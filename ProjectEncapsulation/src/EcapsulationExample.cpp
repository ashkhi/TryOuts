#include "EncapsulationExample.h"

EncapsulationExample::EncapsulationExample()
{
    a = 0;
    b = 0;

    result = 0;

    cout << "object created and initialized" << endl;
}

EncapsulationExample::~EncapsulationExample()
{
    cout << "object destroyed" << endl;
}

int EncapsulationExample::getA()
{
    return a;
}

void EncapsulationExample::setA(int num)
{
    a = num;
}

int EncapsulationExample::getB()
{
    return b;
}

void EncapsulationExample::setB(int num)
{
    b = num;
}

int EncapsulationExample::getResult()
{
    return result;
}

void EncapsulationExample::addTwoNumbers()
{
    result = getA() + getB();
}