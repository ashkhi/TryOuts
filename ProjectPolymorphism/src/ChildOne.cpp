
#include "ChildOne.h"

ChildOne::ChildOne()
{
    setAge(10);

    cout << "Child one object created and initialized" << endl;
}

ChildOne::~ChildOne()
{
    cout << "Child one object destroyed" << endl;
}

void ChildOne::printMyAge()
{
    cout << "I am chiled one and my age is : " << getAge() << endl;
}

void ChildOne::childrenIhave()
{
    cout << "I have zero children" << endl;
}