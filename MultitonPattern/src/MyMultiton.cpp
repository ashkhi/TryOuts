#include "MyMultiton.h"

map <int, MyMultiton *> * MyMultiton::multitonMap = new map <int, MyMultiton *> ();

MyMultiton::MyMultiton()
{
    num = 0;

    cout << "MyMultiton object created and initialized" << endl;
}

MyMultiton * MyMultiton::getInstance(int i)
{
    map <int, MyMultiton *>::iterator it = multitonMap->find(i%2);

    if (it != multitonMap->end())
    {
        return it->second;
    }
    else
    {
        MyMultiton * object = new MyMultiton();
        multitonMap->insert(pair<int, MyMultiton *>((i%2), object));
        return object;
    }
}