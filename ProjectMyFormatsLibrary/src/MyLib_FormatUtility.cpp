#include "MyLib_FormatUtility.h"

namespace MyLib
{
    std::string FormatUtility::formatDateInput(int a)
    {
        return "1JAN1960";
    }

    std::string FormatUtility::formatDollarInput(double a)
    {
        std::string inputStr = std::to_string(a);
        std::string outputStr = "$" + inputStr;
        return outputStr;
    }
}