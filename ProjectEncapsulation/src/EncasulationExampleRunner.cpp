#include "EncapsulationExample.h"

int main()
{
    EncapsulationExample* obj1 = new EncapsulationExample();

    obj1->setA(10);
    obj1->setB(20);
    obj1->addTwoNumbers();

    cout << "Addition of numbers is : " << obj1->getResult() << endl;

    delete(obj1);
}