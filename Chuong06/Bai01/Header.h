#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

inline bool CheckInteger(const string& input)
{
    for (size_t i = 0; i < input.length(); i++)
        if (!isdigit(static_cast<unsigned char>(input[i])))
            return false;
    return true;
}
#endif