#include "AbstractionExample.h"

AbstractionExample::AbstractionExample()
{
    a = 0;
    b = 0;

    result = 0;

    cout << "object created and initialized" << endl;
}

AbstractionExample::~AbstractionExample()
{
    cout << "object destroyed" << endl;
}

int AbstractionExample::addTwoNumbers(int first, int second)
{
    a = first;
    b = second;

    result = a + b;

    return result;
}