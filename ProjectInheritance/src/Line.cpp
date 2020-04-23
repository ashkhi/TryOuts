#include "Line.h"

Line::Line()
{
    numOfVertices = 2;
    numOfSides = 1;

    setDimension(2);
    setColor(new string("Black"));

    cout << "Line object created and initialized" << endl;
}

Line::~Line()
{
    cout << "Line object destroyed" << endl;
}

string* Line::getColor()
{
    return color;
}

void Line::setColor(string* str)
{
    color = str;
}

int Line::getNumOfVertices()
{
    return numOfVertices;
}

void Line::setNumOfVertices(int num)
{
    numOfVertices = num;
}