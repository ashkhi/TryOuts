#include "Parent.h"
#include "ChildOne.h"
#include "ChildTwo.h"

int main()
{
    Parent* p1 = new Parent();

    cout << endl;

    Parent* p2;
    Parent* p3;

    cout << endl;

    ChildOne* c1 = new ChildOne();
    p2 = c1;

    cout << endl;
    
    ChildTwo* c2 = new ChildTwo();
    p3 = c2;

    cout << endl;

    p1->printMyAge();
    p2->printMyAge();
    p2->setAge(10.5f);
    p3->printMyAge();
    p1->childrenIhave();
    p2->childrenIhave();
    p3->childrenIhave();

    cout << endl;
     
    Parent p4 = *p1 + *p1;
    cout << "(Parent + Parent) age together is : ";
    p4.printMyAge();

    cout << endl;

    delete(p1);
    delete(c1);
    delete(c2);

    cout << endl;

    return 0;
}