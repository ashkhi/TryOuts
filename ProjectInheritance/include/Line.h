#pragma once
#include "MyShape.h"

using namespace std;

class Line : public MyShape
{
    private:
        int numOfVertices;

    public:
        Line();
        ~Line();

        int numOfSides;

        string* getColor();
        void setColor(string*);
        
        int getNumOfVertices();
        void setNumOfVertices(int);
};