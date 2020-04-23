#include "MyShape.h"

MyShape::MyShape()
{
    dimension = 0;
    color = new string("");
    
    cout << "Shape object created and initialized" << endl;
}

MyShape::~MyShape()
{
    cout << "MyShape object destroyed" << endl;
}

int MyShape::getDimension()
{
    return dimension;
}

void MyShape::setDimension(int num)
{
    dimension = num;
}