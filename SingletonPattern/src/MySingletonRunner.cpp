#include "MySingleton.h"

int main()
{
    MySingleton *obj1 = MySingleton::getInstance();
    cout << "obj1 instance's member num : " << obj1->num << endl;
    obj1->num = obj1->num + 1;

    MySingleton *obj2 = MySingleton::getInstance();
    cout << "obj2 instance's member num : " << obj2->num << endl;

    cout << "This proves that same object is getting used" << endl;

    return 0;
}