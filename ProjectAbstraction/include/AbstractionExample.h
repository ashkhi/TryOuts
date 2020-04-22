#include <iostream>

using namespace std;

/*
    Here the class has private members int a, int b and int result.
    to add these private members a and b and to store the result in
    private member result the class has exposed public addTwoNumbers API.

    In Abstraction we generally hide unwanted details and just focus
    on the functionality user needs.

    Here the addition is very simple operation however, the same can be
    a very complex task for which only a simple API can be shared with
    the user.

    This is called as 'data abstraction'.

    Abstraction can also be thought of as taking some functionality out
    of the concrete classes and making that reside a level up as parent
    of concrete classes. This is how one can hide the unwanted details
    of the design. The concrete class would have only that functionality
    exposed that user would be really interested in and hide the rest
    of teh part.

    This is called as 'design abstraction'.

    This abstraction be it 'data' or 'design' is largly a part of
    design phase. Where decision about exposing public API is finalized
    and that API do not bother user about the complexity of the code
    under the hood.
*/

class AbstractionExample
{
    private:
        int a;
        int b;
        int result;

    public:
        AbstractionExample();
        ~AbstractionExample();

        int addTwoNumbers(int, int);
};