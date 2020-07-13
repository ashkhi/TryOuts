#pragma once
#include <iostream>
#include <string>

namespace MyLib
{
    class FormatUtility
    {
        public:
            static std::string formatDateInput(int a);
            static std::string formatDollarInput(double a);
    };  
}