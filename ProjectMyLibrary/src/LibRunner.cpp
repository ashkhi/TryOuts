#include <iostream>
#include <string>

#include "MyLib_PrintUtility.h"
#include "MyLib_MathUtility.h"

int main()
{
    int a = 0;
    int b = 0;
    int res = 0;

    std::cout << "Enter first integer : " << std::endl;
    std::cin >> a;
    std::cout << "\n\n";

    std::cout << "Enter second integer : " << std::endl;
    std::cin >> b;
    std::cout << "\n\n";

    res = MyLib::MathUtility::addTwoInts(a, b);
    
    std::string str = std::to_string(res);
    std::string prefix {"Addition of two integers is -> "};

    MyLib::PrintUtility::printMessage(prefix + str);

    return 0;
}