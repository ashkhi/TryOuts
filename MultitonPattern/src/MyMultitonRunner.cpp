#include "MyMultiton.h"

int main()
{
    MyMultiton * obj1 = MyMultiton::getInstance(0);
    cout << "obj1 instance's member num : " << obj1->num << endl;
    obj1->num = obj1->num + 1;
    cout << "obj1 instance's member num after increment : " << obj1->num << endl;

    MyMultiton * obj2 = MyMultiton::getInstance(1);
    cout << "obj2 instance's member num : " << obj2->num << endl;
    obj2->num = obj2->num + 2;
    cout << "obj2 instance's member num after increment : " << obj2->num << endl;

    MyMultiton * obj3 = MyMultiton::getInstance(2);
    cout << "obj3 instance's member num : " << obj3->num << endl;

    MyMultiton * obj4 = MyMultiton::getInstance(3);
    cout << "obj4 instance's member num : " << obj4->num << endl;

    cout << "This proves that same two objects are in use" << endl;
}