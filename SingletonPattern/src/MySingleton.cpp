#include "MySingleton.h"

MySingleton * MySingleton::object = nullptr; 

MySingleton::MySingleton()
{
    num = 0;

    cout << "MySingleton object created and initialzed" << endl;
}

MySingleton * MySingleton::getInstance()
{
    if (!object)
    {
        object = new MySingleton();
    }

    return object;
}