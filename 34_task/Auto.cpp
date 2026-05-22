#include "Auto.h"

bool Auto::checkNumb(const string& number)
{
    if (number.length() != 8)
        return false;

    if (!((number[0] >= 'A' and number[0] <= 'Z') or (number[0] >= 'a' and number[0] <= 'z')))
        return false;
    
    if (!((number[1] >= 'A' and number[1] <= 'Z') or (number[1] >= 'a' and number[1] <= 'z')))
        return false;

    for (size_t i = 2; i < 6; i++)
    {
        if (!(number[i] >= '0' and number[i] <= '9'))
            return false;
    }

    if (!((number[6] >= 'A' and number[6] <= 'Z') or (number[6] >= 'a' and number[6] <= 'z')))
        return false;

    if (!((number[7] >= 'A' and number[7] <= 'Z') or (number[7] >= 'a' and number[7] <= 'z')))
        return false;

    return true;

}
