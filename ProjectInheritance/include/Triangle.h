#pragma once
#include "MyShape.h"

class Triangle : public MyShape
{
    private:
        int numOfVertices;

    public:
        Triangle();
        ~Triangle();

        int numOfSides;

        string* getColor();
        void setColor(string*);
        
        int getNumOfVertices();
        void setNumOfVertices(int);
};