#include <iostream>

using namespace std;

class EncapsulationExample
{
    private:
        int a;
        int b;
        int result;
    
    public:
        EncapsulationExample();
        ~EncapsulationExample();

        int getA();
        void setA(int);

        int getB();
        void setB(int);

        int getResult();
        
        void addTwoNumbers();
};