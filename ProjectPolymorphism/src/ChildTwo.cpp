
#include "ChildTwo.h"

ChildTwo::ChildTwo()
{
    setAge(5);

    cout << "Child two object created and initialized" << endl;
}

ChildTwo::~ChildTwo()
{
    cout << "Child two object destroyed" << endl;
}

void ChildTwo::printMyAge()
{
    cout << "I am chiled two and my age is : " << getAge() << endl;
}

void ChildTwo::childrenIhave()
{
    cout << "I have zero children" << endl;
}