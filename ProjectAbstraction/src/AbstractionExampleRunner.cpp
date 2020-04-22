#include <iostream>
#include "AbstractionExample.h"

int main()
{
    AbstractionExample* obj1 = new AbstractionExample();

    const auto res = obj1->addTwoNumbers(10, 20);

    cout << "The result of addition is : " << res << endl;

    delete(obj1);

    return 0;
}