#include "Line.h"
#include "Triangle.h"

int main()
{
    Line* l1 = new Line();
    Triangle* t1 = new Triangle();

    cout << endl;

    cout << "Number of sides in line segment are : " << l1->numOfSides << endl;
    cout << "Number of vertices for line segment are : " << l1->getNumOfVertices() << endl;
    cout << "Line default color is : " << *l1->getColor() << endl;
    l1->setColor(new string("Green"));
    cout << "Line color is : " << *l1->getColor() << endl;
    cout << "Line diamention is : " << l1->getDimension() << endl;

    cout << endl;

    cout << "Number of sides in triangle segment are : " << t1->numOfSides << endl;
    cout << "Number of vertices for triangle segment are : " << t1->getNumOfVertices() << endl;
    cout << "Triangle default color is : " << *t1->getColor() << endl;
    t1->setColor(new string("Green"));
    cout << "Triangle color is : " << *t1->getColor() << endl;
    cout << "Triangle diamention is : " << t1->getDimension() << endl;

    cout << endl;

    delete(l1);
    delete(t1);

    return 0;
}