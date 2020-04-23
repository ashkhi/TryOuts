#include "Triangle.h"

Triangle::Triangle()
{
    numOfVertices = 3;
    numOfSides = 3;

    setDimension(2);
    setColor(new string("Black"));

    cout << "Triangle object created and initialized" << endl;
}

Triangle::~Triangle()
{
    cout << "Triangle object destroyed" << endl;
}

string* Triangle::getColor()
{
    return color;
}

void Triangle::setColor(string* str)
{
    color = str;
}

int Triangle::getNumOfVertices()
{
    return numOfVertices;
}

void Triangle::setNumOfVertices(int num)
{
    numOfVertices = num;
}