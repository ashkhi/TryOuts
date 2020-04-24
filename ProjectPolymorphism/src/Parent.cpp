#include "Parent.h"

Parent::Parent()
{
    age = 40;

    cout << "Parent object created and initialized" << endl;
}

Parent::~Parent()
{
    cout << "Parent object destroyed" << endl;
}

int Parent::getAge()
{
    return age;
}

void Parent::setAge(int num)
{
    age = num;
}

void Parent::setAge(float num)
{
    age = static_cast<int>(num);
}

void Parent::printMyAge()
{
    cout << "I am a parent and my age is : " << age << endl;
}

void Parent::childrenIhave()
{
    cout << "I have two children" << endl;
}