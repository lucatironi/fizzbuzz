#ifndef _FIZZBUZZ_H
#define _FIZZBUZZ_H

#include <sstream>

std::string fizzbuzz(int i)
{
    std::ostringstream output;

    if (i > 0)
    {
        if (i % 3 == 0) output << "Fizz";
        if (i % 5 == 0) output << "Buzz";
    }
    
    if (output.str() == "") output << i;

    return output.str();
}

#endif